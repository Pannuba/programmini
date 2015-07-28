#include <iostream>
#include <windows.h>
#include "frames.h"
#include "music.h"
using namespace std;

int main(){
	
	system("mode 800");
	frame1();
	while (true)
	{
	    music();
	}
	
	return EXIT_SUCCESS;
}
