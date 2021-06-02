#include "pch.h"
#include "Keypresses.hpp"
#include "slimwin.hpp"
#include "dllmain.hpp"
#include <string>

using std::cout;
using std::cin;

void CharacterSelection() {

    using std::string;
    using std::endl;

    string character;

    cout << endl << "Supported Characters:" << endl << "Hattori" << endl << endl << "That is about it for now!" << endl << "Type (exit) to exit the Character Selection." << endl;
    cin >> character;

    if (character == "Hattori" || character == "hattori") {
        cout << "You have successfully selected Hattori";
        Hattori();
    }

    if (character == "exit" || character == "Exit" || character == "EXIT") {
        system("cls");
        cout << "Back to main Menu we go!" << endl;
        cout << endl << "To select a character press (K)" << endl << "To end the Program press (END)" << endl;
        
    }

    if (character != "exit" && character != "Exit" && character != "EXIT" && character != "Hattori" && character != "hattori") {
        cout << "Invalid input or Character not supported yet!";
    }
}