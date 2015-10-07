/*
I don't really care about cross-platform compatibility... *yet* and btw the following doesnt 100% work

#if _WIN32 || _WIN64
	#include <cstdlib>
	#define clearscreen() system("cls")
#endif

#ifdef __linux__
	#include <unistd.h>
	#define clearscreen() system("clear")
#endif

*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

int main(){

	system("color a");
	unsigned int hor, min, sec;
	
	for (hor = 0; hor < 24; hor++)
	
	{
		
		for (min = 0; min < 60; min++)
		
		{
			
			for (sec = 0; sec < 60; sec++)
			
			{
				string strhor = "", strmin = " : ", strsec = " : ";
				
				if (sec < 10)
					strsec = " : 0";
				
				if (min < 10)
					strmin = " : 0";
				
				if (hor < 10)
					strhor = "0";
				
				system("cls");
				cout << strhor << hor << strmin << min << strsec << sec;
				this_thread::sleep_for(chrono::milliseconds(1000));
			}

		}

	}
	
	cout << "\n\nE\' passato un giorno, sveglia!!!";
	cout << "\n\nPremi invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
