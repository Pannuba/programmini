#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;

int main(){
	
    system("color a");
    string giocatore1, giocatore2, giocare;    
    int num1, num2;
    cout << "In questo gioco vince chi estrae il numero piu' alto\n\nGiocatore 1, come ti chiami? ";
    cin >> giocatore1;
    cout << "\nGiocatore 2, come ti chiami? ";
    cin >> giocatore2;
    
    for ( ;; )
    
    {
        srand((unsigned)time(0));
        num1 = rand() % 999999999;
	    num2 = rand() % 999999999;	
		cout << "\n\nIl numero estratto da " << giocatore1 << " e' " << num1;
		cout << "\n\nIl numero estratto da " << giocatore2 << " e' " << num2;
		
		if (num1 > num2)
		
		{
		    cout << "\n\nHa vinto " << giocatore1 << "!!!\n\n";
		}
    
    	if (num1 < num2)
    
    	{
            cout << "\n\nHa vinto " << giocatore2 << "!!!\n\n";
    	}
    
    	else if (num1 == num2)
    
    	{
            cout << "\n\nAvete perso tutti e due balordi babbei\n\n";
   		}
        
    	cout << "Volete giocare ancora? ";
    	cin >> giocare;
        
    	if (giocare == "si") /* Come faccio a dire "se giocare = si O giocare = Si" --> allora...? */
        
    	{
        
    	}
        
    	if (giocare == "no")
        
    	{
            goto fine;
    	}
	}
	
	cin.ignore();
	cin.get();
	
	fine:
	
	return EXIT_SUCCESS;
}
