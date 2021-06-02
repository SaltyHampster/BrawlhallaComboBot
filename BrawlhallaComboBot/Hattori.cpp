#include "dllmain.hpp"
#include "pch.h"

#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include "slimwin.hpp"
#include "Keypresses.hpp"


void Hattori() {
	
	using std::endl;

	std::cout << endl << "To select a new Character Press (K)" << endl;
	std::cout << "Current Combos:" << endl;

	while (true) {

		if (GetAsyncKeyState(VK_KEY_Q)) {
			LeftLight();
		}

		if (GetAsyncKeyState(VK_KEY_K) & 1) {
			break;
		}


	}
}

