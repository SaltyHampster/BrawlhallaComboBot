#include "pch.h"
#include "Keypresses.hpp"
#include "slimwin.hpp"

void LeftLight() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_LEFT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_C;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_LEFT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void LeftHeavy() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_LEFT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_X;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_LEFT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityLeftLight() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_LEFT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_SHIFT;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_KEY_C;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = VK_SHIFT;
	inputs[4].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[5].type = INPUT_KEYBOARD;
	inputs[5].ki.wVk = VK_LEFT;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityLeftHeavy() {

}
void RightLight() {

}
void RightHeavy() {

}
void GravityRightLight() {

}
void GravityRightHeavy() {

}
void UpLight() {

}
void UpHeavy() {

}
void GravityUpLight() {

}
void GravityUpHeavy() {

}
void DownLight() {

}
void DownHeavy() {

}
void GravityDownLight() {

}
void GravityDownHeavy() {

}
