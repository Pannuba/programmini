#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	srand(time(0));

	for ( ;; )
	
	{
		string num = "#";
		int colore;
		cout << num;
		colore = rand() % 15;
		
		if (colore == 0)
		
		{
			system("color 1");
			//cout << " ";
			cout << num;
		}
		
		if (colore == 1)
		
		{
			system("color 2");
			cout << num;
		}
		
		if (colore == 2)
		
		{
			system("color 3");
			cout << num;
		}
		
		if (colore == 3)
		
		{
			system("color 4");
			cout << num;
		}
		
		if (colore == 4)
		
		{
			system("color 5");
			cout << num;
		}
		
		if (colore == 5)
		
		{
			system("color 6");
			cout << num;
		}
				
		if (colore == 6)
		
		{
			system("color 7");
			cout << num;
		}
				
		if (colore == 7)
		
		{
			system("color 8");
			cout << num;
		}
				
		if (colore == 8)
		
		{
			system("color 9");
			cout << num;
		}
				
		if (colore == 9)
		
		{
			system("color A");
			cout << num;
		}
				
		if (colore == 10)
		
		{
			system("color B");
			cout << num;
		}
				
		if (colore == 11)
		
		{
			system("color C");
			cout << num;
		}
				
		if (colore == 12)
		
		{
			system("color D");
			cout << num;
		}
				
		if (colore == 13)
		
		{
			system("color E");
			cout << num;
		}
				
		if (colore == 14)
		
		{
			system("color F");
			cout << num;
		}
		
	}
	
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
