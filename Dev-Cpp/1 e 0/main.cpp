#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	system("color a");
	srand(time(0));

	for ( ;; )
	
	{
		int num;
		
		num = rand() % 2;
		
		if (num == 0)
		
		{
			cout << "1";
			num = rand() % 2;
			
			if (num == 1)
			
			{
			    cout << " ";
			}
			
			else
			
			{
			    //lol spazio vuoto
			}
		}
		
		else if (num == 1)
		
		{
			cout << "0";
			num = rand() % 2;
			
			if (num == 1)
			
			{
			    cout << " ";
			}
			
			else
			
			{
			    //lol spazio vuoto
			}
		
		}
		
	}
	
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
