#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void tantinum()

{
	for (unsigned int i = 0; i < 10; i++)
	
	{
		cout << "##";
	}
	
}

int main(){
	
	system("mode 800");
	srand((unsigned) time(0));
	
	for ( ;; )
	
    {
    	
    	switch (rand() % 15)
    	
    	{
    		case 0:
				
				system("color 1");
				tantinum();
				break;
				
			case 1:
			
				system("color 2");
				tantinum();
				break;
				
			case 2:
				
				system("color 3");
				tantinum();
				break;
				
			case 3:
				
				system("color 4");
				tantinum();
				break;
				
			case 4:
				
				system("color 5");
				tantinum();
				break;
				
			case 5:
				
				system("color 6");
				tantinum();
				break;
				
			case 6:
				
				system("color 7");
				tantinum();
				break;
				
			case 7:
				
				system("color 8");
				tantinum();
				break;
				
			case 8:
				
				system("color 9");
				tantinum();
				break;
				
			case 9:
				
				system("color A");
				tantinum();
				break;
				
			case 10:
				
				system("color B");
				tantinum();
				break;
				
			case 11:
				
				system("color C");
				tantinum();
				break;
				
			case 12:
				
				system("color D");
				tantinum();
				break;
				
			case 13:
				
				system("color E");
				tantinum();
				break;
				
			case 14:
				
				system("color F");
				tantinum();
				break;
				
		}
		
    }
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
    cin.get();
	return EXIT_SUCCESS;
}
