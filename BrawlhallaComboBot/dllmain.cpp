// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "dllmain.hpp"
#include "Keypresses.hpp"
#include "slimwin.hpp"
#include <string>
#include <thread>

using std::cout;
using std::cin;

DWORD WINAPI BrawlComboBot(static HMODULE hModule)
{

    using std::string;
    using std::endl;

    //Create Console
    AllocConsole();

    FILE* fDummy;
    freopen_s(&fDummy, "CONOUT$", "w", stdout);
    freopen_s(&fDummy, "CONOUT$", "w", stderr);
    freopen_s(&fDummy, "CONIN$", "r", stdin);
    
    system("title Brawlhalla Combobot");
    
    
    cout << "Brawlhalla Combobot v0.0.1" << endl << "To select a character press (K)" << endl << "To end the Program press (END)" << endl;

    while (true)
    {
        //Main Program
        if (GetAsyncKeyState(VK_KEY_K)) {
            CharacterSelection();
        }

        if (GetAsyncKeyState(VK_END) & 1)
        {
            break;
        }
    }

    cout << std::endl << "Program Closed" << std::endl << "Uninjected Successful";

    fclose(fDummy);
    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);
    
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)BrawlComboBot, hModule, 0, nullptr));
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}