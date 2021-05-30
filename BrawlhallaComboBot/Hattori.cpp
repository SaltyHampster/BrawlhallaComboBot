#include "dllmain.hpp"
#include "pch.h"

#define WIN32_LEAN_AND_MEAN

#include "slimwin.hpp"
#include "Keypresses.hpp"


int Hattori() {
	while (true) {

		if (GetAsyncKeyState(VK_KEY_A)) {
		}

		if (GetAsyncKeyState(VK_NUMPAD0)) {
			break;
		}
	}
	return 0;
}

