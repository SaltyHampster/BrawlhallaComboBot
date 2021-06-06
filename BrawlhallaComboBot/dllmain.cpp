// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "dllmain.hpp"
#include "Keypresses.hpp"
#include "slimwin.hpp"

using std::cout;
using std::cin;

DWORD WINAPI BrawlComboBot(static HMODULE hModule) {

    // Create Console
    AllocConsole();

    FILE* fDummy;
    freopen_s(&fDummy, "CONOUT$", "w", stdout);
    freopen_s(&fDummy, "CONOUT$", "w", stderr);
    freopen_s(&fDummy, "CONIN$", "r", stdin);
    system("title Brawlhalla Combobot");

    // Get a reference to the new console
    HANDLE comboBotConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(comboBotConsole, 14); // Set text yellow
    cout << "Brawlhalla Combobot v0.0.2" << '\n' << "To select a character press (K)" << '\n' << "To end the Program press (END)" << '\n';
    SetConsoleTextAttribute(comboBotConsole, 15); // Set text white
    
    while (true)
    {
        //Main Program
        if (GetAsyncKeyState(VK_KEY_K)) {
            CharacterSelection(comboBotConsole);
        }

        if (GetAsyncKeyState(VK_END) & 1)
        {
            break;
        }
    }

    cout << '\n' << "Program Closed" << '\n' << "Uninjected Successful";

    if (fDummy != 0)
        fclose(fDummy);
    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);
    
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        HANDLE thread = CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)BrawlComboBot, hModule, 0, nullptr);
        if (thread != 0)
            CloseHandle(thread);
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}