#ifndef _IOSTREAM_H
#define _IOSTREAM_H

//C Runtime Header Files
#ifndef _IOSTERAM_
	#include <iostream>
#endif

//Define
#ifdef UNICODE
#define tcout wcout
#define tcin wcin
#else
#define tcout cout
#define tcin cin
#endif

#endif //_IOSTREAM_H