#include <GL/glew.h>
#include <GLFW/glfw3.h>

int _main();

#ifdef _WIN32
#include <cstring>
#include <windows.h>
#include <platform/win/DebugConsole.h>

int WinMain(HINSTANCE, HINSTANCE, LPSTR lpCmdLine, int) {
	if (lpCmdLine && std::strcmp(lpCmdLine, "-d") == 0) {
		DebugConsole::init();
	}

	return _main(); 
}

#elif defined(__linux__)

int main() {
	return _main();
}

#endif

int _main() {
	return 0;
}