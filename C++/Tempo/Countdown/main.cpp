#include <iostream>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

int main(){

	system("color a");
	unsigned int hor, min, sec;
	cout << "PannCountdown\n\n";
	cout << "Ore per il timer? ";
	cin >> hor;
	cout << "\nMinuti? ";
	cin >> min;
	cout << "\nSecondi? ";
	cin >> sec;
	
	for ( ; hor < 24; hor--)
	
	{
		
		for ( ; min < 60; min--)
		
		{
			
			for ( ; sec < 60; sec--)
			
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
	
	cout << "\n\nTime Out!!!";
	cout << "\n\nPremi invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
