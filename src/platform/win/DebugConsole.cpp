#include <platform/win/DebugConsole.h>

#include <windows.h>
#include <stdio.h>

void DebugConsole::init() {
	AllocConsole();

	FILE *tempFile;
	freopen_s(&tempFile, "CONOUT$", "w", stdout);
	freopen_s(&tempFile, "CONOUT$", "w", stderr);
};