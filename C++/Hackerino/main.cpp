#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("color a");
    srand((unsigned) time(0));
	
	for ( ;; )
	
	{
	    char carr[59] = "abcdefghijklmnopqrstuvwxyz0123456789,.-@#][_*^?\'=!\\<>\"|()+";
		cout <<	carr[rand() % 59];
		
		if ((rand() % 2) == 1)
		
		{
	    	cout << " ";
		}
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
