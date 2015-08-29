#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("color a");
	srand((unsigned) time(0));

	for ( ;; )
	
	{
		if ((rand() % 2) == 0)
		
		{
			cout << "1";
			
			if ((rand() % 2) == 1)
			
			{
			    cout << " ";
			}
			
		}
		
		else if ((rand() % 2) == 1)
		
		{
			cout << "0";
			
			if ((rand() % 2) == 1)
			
			{
			    cout << " ";
			}
		
		}
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
