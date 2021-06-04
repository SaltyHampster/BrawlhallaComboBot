#include "pch.h"
#include "Keypresses.hpp"
#include "slimwin.hpp"


void NeutralLight() {
	INPUT inputs[2] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_C;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void NeutralHeavy() {
	INPUT inputs[2] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_X;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityNeutralLight() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_SHIFT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_C;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_SHIFT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityNeutralHeavy() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_SHIFT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_X;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_SHIFT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
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
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_LEFT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_SHIFT;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_KEY_X;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = VK_SHIFT;
	inputs[4].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[5].type = INPUT_KEYBOARD;
	inputs[5].ki.wVk = VK_LEFT;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void RightLight() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_RIGHT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_X;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_RIGHT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void RightHeavy() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_RIGHT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_C;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_RIGHT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityRightLight() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_RIGHT;

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
	inputs[5].ki.wVk = VK_RIGHT;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityRightHeavy() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_RIGHT;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_SHIFT;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_KEY_X;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = VK_SHIFT;
	inputs[4].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[5].type = INPUT_KEYBOARD;
	inputs[5].ki.wVk = VK_RIGHT;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void UpLight() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_UP;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_C;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_UP;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void UpHeavy() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_UP;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_X;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_UP;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityUpLight() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_UP;

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
	inputs[5].ki.wVk = VK_UP;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityUpHeavy() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_UP;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_SHIFT;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_KEY_X;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = VK_SHIFT;
	inputs[4].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[5].type = INPUT_KEYBOARD;
	inputs[5].ki.wVk = VK_UP;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void DownLight() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_DOWN;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_C;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_C;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_DOWN;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void DownHeavy() {
	INPUT inputs[4] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_DOWN;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_KEY_X;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_DOWN;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityDownLight() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_DOWN;

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
	inputs[5].ki.wVk = VK_DOWN;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
void GravityDownHeavy() {
	INPUT inputs[6] = {};
	ZeroMemory(inputs, sizeof(inputs));

	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_DOWN;

	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = VK_SHIFT;

	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = VK_KEY_X;

	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_KEY_X;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[4].type = INPUT_KEYBOARD;
	inputs[4].ki.wVk = VK_SHIFT;
	inputs[4].ki.dwFlags = KEYEVENTF_KEYUP;

	inputs[5].type = INPUT_KEYBOARD;
	inputs[5].ki.wVk = VK_DOWN;
	inputs[5].ki.dwFlags = KEYEVENTF_KEYUP;

	UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}

void Delay(int delay) {
	Sleep(delay);
}
