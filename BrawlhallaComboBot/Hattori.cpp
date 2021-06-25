#include "dllmain.hpp"
#include "pch.h"
#include "slimwin.hpp"
#include "Keypresses.hpp"


void Hattori() {

    std::cout << '\n' << "To select a new Character Press (K)" << '\n' << "Press U for Spear and I for Sword";
    std::cout << "Current Combos:" << '\n' << "Standard Spear Combo (Q) and (E) for left and right" << '\n';

    while (true) {


        //Spear Code
        if (GetAsyncKeyState(VK_KEY_U)) {
            while (true) {
                //Left Combo
                if (GetAsyncKeyState(VK_KEY_Q)) {
                    LeftLight();
                    Delay(750);
                    DownLight();
                    Delay(750);
                    UpHeavy();
                }
                //Right Combo
                if (GetAsyncKeyState(VK_KEY_E)) {
                    RightLight();
                    Delay(750);
                    DownLight();
                    Delay(750);
                    UpHeavy();
                }

                if (GetAsyncKeyState(VK_KEY_K) & 1) {
                    break;
                }
            }
        }

        //Sword Code

        if (GetAsyncKeyState(VK_KEY_I)) {
            while (true) {
                //Spear Combos
                /*
                if (GetAsyncKeyState(VK_KEY_Q)) {
                    LeftLight();
                    Delay(750);
                    DownLight();
                    Delay(750);
                    UpHeavy();
                }

                if (GetAsyncKeyState(VK_KEY_E)) {
                    RightLight();
                    Delay(750);
                    DownLight();
                    Delay(750);
                    UpHeavy();
                }

                if (GetAsyncKeyState(VK_KEY_K) & 1) {
                    break;
                }*/
            }
        }
        if (GetAsyncKeyState(VK_KEY_K) & 1) {
            break;
        }
    }
}

