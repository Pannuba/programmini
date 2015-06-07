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
			system("color 1F");
			//cout << " ";
			cout << num;
		}
		
		if (colore == 1)
		
		{
			system("color 2D");
			cout << num;
		}
		
		if (colore == 2)
		
		{
			system("color 37");
			cout << num;
		}
		
		if (colore == 3)
		
		{
			system("color 4B");
			cout << num;
		}
		
		if (colore == 4)
		
		{
			system("color 5A");
			cout << num;
		}
		
		if (colore == 5)
		
		{
			system("color 68");
			cout << num;
		}
				
		if (colore == 6)
		
		{
			system("color 7F");
			cout << num;
		}
				
		if (colore == 7)
		
		{
			system("color 80");
			cout << num;
		}
				
		if (colore == 8)
		
		{
			system("color 9E");
			cout << num;
		}
				
		if (colore == 9)
		
		{
			system("color AD");
			cout << num;
		}
				
		if (colore == 10)
		
		{
			system("color BC");
			cout << num;
		}
				
		if (colore == 11)
		
		{
			system("color CB");
			cout << num;
		}
				
		if (colore == 12)
		
		{
			system("color D3");
			cout << num;
		}
				
		if (colore == 13)
		
		{
			system("color E9");
			cout << num;
		}
				
		if (colore == 14)
		
		{
			system("color F0");
			cout << num;
		}
		
	}
	
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
