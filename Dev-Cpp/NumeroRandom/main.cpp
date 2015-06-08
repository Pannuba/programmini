#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){
	
    system("color a");
    srand(time(0));
    string giocatore1, giocatore2, giocare;
    float num1, num2;
    cout << "In questo gioco vince chi estrae il numero piu' alto\n\nGiocatore 1, come ti chiami? ";
    getline(cin, giocatore1);
    cout << "\nGiocatore 2, come ti chiami? ";
    getline(cin, giocatore2);
    
    for ( ;; )
    
    {
        num1 = rand();
	    num2 = rand();	
		cout << "\n\nIl numero estratto da " << giocatore1 << " e' " << num1;
		cout << "\n\nIl numero estratto da " << giocatore2 << " e' " << num2;
		
		if (num1 > num2)
		
		{
		    cout << "\n\nHa vinto " << giocatore1 << "!\n\n";
		}
    
    	if (num1 < num2)
    
    	{
            cout << "\n\nHa vinto " << giocatore2 << "!\n\n";
    	}
    
    	else if (num1 == num2)
    
    	{
            cout << "\n\nAvete perso tutti e due!\n\n";
   		}
        
    	cout << "Volete giocare ancora? ";
    	cin >> giocare;
    	
    	while (giocare != "si" && giocare != "no" && giocare != "Si" && giocare != "No")
    	
    	{
            cerr << "\nInserire si o no: ";
            cin >> giocare;
            
            if (giocare == "o")
        
            {
                cout << "\nAhah bella battuta! Ora inserisci \"si\" oppure \"no\" ";
                cin >> giocare;
            }
            
        }
        
    	if (giocare == "si" || giocare == "Si")
        
    	{
            // lol spazio vuoto
    	}
        
    	else if (giocare == "no" || giocare == "No")
        
    	{
            break;
    	}
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	return EXIT_SUCCESS;
}
