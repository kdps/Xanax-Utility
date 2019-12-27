#include <string>
#include <iostream>
#include <filesystem>
#include <stdio.h>

#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif

using namespace std;
namespace fs = std::filesystem;

int main(
		int argc,       // Number of strings in array argv
		char *argv[],   // Array of command-line argument strings
		char *envp[]    // Array of environment variable strings
	)  

	int arg;

	cout << "This C++ script is insert description and other values into Xanax php code";
	cout << "# Script argument #";
	cout << "1. Insert comment of your country language into php script";
	cout << "2. Generate interface of class file";
	cout << "3. Generate interface of class file";
	
	cin >> arg;
	
	char cCurrentPath[FILENAME_MAX];

	if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath)))
	{
		return errno;
	}

	cCurrentPath[sizeof(cCurrentPath) - 1] = '\0'; /* not really required */

	string currentCommandLinePath(cCurrentPath);

	std::string path = *currentCommandLinePath;
	for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
		
}
