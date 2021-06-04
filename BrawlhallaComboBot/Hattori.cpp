#include "dllmain.hpp"
#include "pch.h"

#include <iostream>
#include "slimwin.hpp"
#include "Keypresses.hpp"


void Hattori() {
	
	using std::endl;

	std::cout << endl << "To select a new Character Press (K)" << endl;
	std::cout << "Current Combos:" << endl << "Standard Spear Combo (Q) and (E) for left and right" << endl;

	while (true) {


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
		}


	}
}

