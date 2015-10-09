#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("mode 800");
	system("cls");
	srand((unsigned) time(0));

	for ( ;; )
	
	{	
		switch (rand() % 16)
		
		{
			case 0:
				system("color 10");
				
			case 1:
				system("color 21");
			
			case 2:
				system("color 32");
				
			case 3:
				system("color 43");
				
			case 4:
				system("color 54");
				
			case 5:
				system("color 65");
				
			case 6:
				system("color 76");
				
			case 7:
				system("color 87");
				
			case 8:
				system("color 98");
				
			case 9:
				system("color A9");
				
			case 10:
				system("color BA");
				
			case 11:
				system("color CB");
				
			case 12:
				system("color DC");
				
			case 13:
				system("color ED");
				
			case 14:
				system("color FE");
				
			case 15:
				system("color 0F");
		}
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
