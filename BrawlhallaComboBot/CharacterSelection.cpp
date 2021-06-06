#include "pch.h"
#include "Keypresses.hpp"
#include "slimwin.hpp"
#include "dllmain.hpp"

using std::cout;
using std::cin;
using std::string;

void CharacterSelection(HANDLE comboBotConsole) {

    // Add new characters to this vector!
    std::vector<string> supportedCharacters = {
        "Hattori"
    };

    // Character selection screen
    string character;
    cout << '\n' << "Supported Characters:";

    SetConsoleTextAttribute(comboBotConsole, 12); // Set red text
    for (auto s : supportedCharacters) {
        cout << '\n' << s;
    }
    SetConsoleTextAttribute(comboBotConsole, 15); // Set white text
    cout << "\n\n" << "That is about it for now!" << '\n' << "Type (exit) to exit the Character Selection." << '\n';
    cin >> character;

    // Put their selection to lower case so we only have to check lowercase
    string choice = "";
    for (auto c : character) {
        choice += std::tolower(c);
    }

    // Act on input
    if (choice == "hattori") {
        cout << "You have successfully selected Hattori";
        Hattori();
    }
    else if (choice == "exit") {
        system("cls");
        cout << "Back to main Menu we go!" << '\n';
        cout << '\n' << "To select a character press (K)" << '\n' << "To end the Program press (END)" << '\n';
    }
    else {
        cout << "Invalid input!";
    }
}