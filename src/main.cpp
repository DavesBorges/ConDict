#include <Windows.h>
#include <iostream>
#include "Helper.h"


#ifdef WINDOWS
	#define win w
#else
	#define win 
#endif

int winmain(int argc, wchar* argv[]){
	
	setup_unicode();
	
	if(argc == 1){
		stdin_mode();
	}
	else{
		commandline_arguments_mode();
	}

	restore_environment();
}

	
	
