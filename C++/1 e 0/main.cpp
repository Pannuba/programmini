#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("mode 800");
	system("color a");
	srand((unsigned) time(0));
	
	for ( ;; )
	
	{
		switch (rand() % 2)
		
		{
			case 0:
				
				cout << "1";
				
				if ((rand() % 2) == 1)
				
				{
					cout << " ";
				}
				
			case 1:
				
				cout << "0";
				
				if ((rand() % 2) == 1)
				
				{
					cout << " ";
				}
		
		}
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
