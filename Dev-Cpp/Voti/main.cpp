#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main(){
	
	system("color a");
	int i = 0;
    float tot, voti[i], media;         // Se tolgo i = 0 va in crisi
    cout << "PannCalcolaMedie\n\n";
    
	for ( ;; )
	
	{
        float somma = 0;
        cout << "Numero totale voti? ";
		cin >> tot;
		cout << "\n";
		
        for (i = 0; i < tot; i++)
		
		{
	        cout << "Inserisci voto " << i + 1 << ": ";
			cin >> voti[i];
			
			while (voti[i] > 10 || voti[i] < 0)
			
			{
			    cout << "Inserire un numero compreso tra 0 e 10: ";
			    cin >> voti[i];
			}
			
		}

		for (i = 0; i < tot; i++)                /* Devo rimettere i = 0 altrimenti usa l'i = n di prima */
	
		{
		    somma = somma + voti[i];
		}
	
		media = somma / tot;
		cout << "\nMedia: " << media << "\n\n";
		
		for (i = 0; i < tot; i++)
		
		{
            if (voti[i] >= 6)
            
            {
                
            }
            
        }
                
	}
	
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
