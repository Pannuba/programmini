#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <void.h>
using namespace std;

/* http://www.phy.mtu.edu/~suits/notefreqs.html */

int main(){
	
	weed();
	cout << "\n\nPremi invio...";
	cin.ignore();
	
	for (int i = 0; i < 2; i++)
		
	{
	    intro();
	    Sleep(1000);
	}
		
	while (true)
	
	{
	    tune();
	}
	
	return EXIT_SUCCESS;
}
