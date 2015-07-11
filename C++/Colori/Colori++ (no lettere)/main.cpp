#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("CLS");
	srand(time(0));

	for ( ;; )
	
	{
		int colore;
		colore = rand() % 16;
		
		if (colore == 0)
		
		{
			system("color 10");
		}
		
		if (colore == 1)
		
		{
			system("color 21");
		}
		
		if (colore == 2)
		
		{
			system("color 32");
		}
		
		if (colore == 3)
		
		{
			system("color 43");
		}
		
		if (colore == 4)
		
		{
			system("color 54");
		}
		
		if (colore == 5)
		
		{
			system("color 65");
		}
				
		if (colore == 6)
		
		{
			system("color 76");
		}
	 		
		if (colore == 7)
		
		{
			system("color 87");
		}
				
		if (colore == 8)
		
		{
			system("color 98");
		}
				
		if (colore == 9)
		
		{
			system("color A9");
		}
				
		if (colore == 10)
		
		{
			system("color BA");
		}
				
		if (colore == 11)
		
		{
			system("color CB");
		}
				
		if (colore == 12)
		
		{
			system("color DC");
		}
				
		if (colore == 13)
		
		{
			system("color ED");
		}
				
		if (colore == 14)
		
		{
			system("color FE");
		}
		
		if (colore == 15)
		
		{
			system("color 0F");
		}
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	return EXIT_SUCCESS;
}
