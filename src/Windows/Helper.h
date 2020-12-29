#include <Windows.h>
#include <map>
#include <string>

std::map<std::string, <std::vector<std::wstring>> dictionary;


int chcp_input;
int chcp_output;


// Prepare the environment for dealing with unicode characters
void setup_unicode();

// Restore any environment state that setup_unicode changed
void restore_environment();

//Perform multiple reading from the stdin
void stdin_mode();

//Perform only the translation in command line
void commandline_arguments_mode();

