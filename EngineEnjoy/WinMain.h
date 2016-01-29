#ifndef _WINMAIN_H
#define _WINMAIN_H

//C Runtime Header
#ifndef _WINMAIN_
	#include <Windows.h>
#endif

int _tmain(int argc, char* argv[]);
int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow);

#endif // _WINMAIN_H

