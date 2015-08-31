#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("color a");
	system("mode 800");
    srand((unsigned) time(0));
    const char caratteri[59] = "abcdefghijklmnopqrstuvwxyz0123456789,.-@#][_*^?\'=!\\<>\"|()+";
	
	for ( ;; )
	
	{
		cout <<	caratteri[rand() % 59];
		
		if ((rand() % 2) == 1)
		
		{
	    	cout << " ";
		}
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
