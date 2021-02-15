#include "Helper.h"

//chcp_input and chcp_output stores the initial code pages of the console
// for posterior restoring in the
// restore_environment function

int chcp_input;
int chcp_output;

void setup_unicode(){
	chcp_input = GetConsoleCP();
	chcp_output = GetConsoleOutputCP();

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
}


void restore_environment(){

	SetConsoleCP(chcp_input);
	SetConsoleOutputCP(chcp_output);
}


void stdin_mode(){
	
	
}

void commandline_arguments_mode()
{
}

void readIntoDictionary(){

}
