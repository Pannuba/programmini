#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){
	
	system("color a");
	
	for ( ;; )
	
	{
	    char carr[60] = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
						'n','o','p','q','r','s','t','u','v','w','x','y','z',
						'!','%','^','&','*','(',')','-','=','+','_','{',
						'}','~','@',':','?','>','<',',','.','/',';','1','2',
						'3','4','5','6','7','8','9','0'};
		cout <<	carr[rand() % 60];
		
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
