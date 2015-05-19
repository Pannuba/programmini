#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;

int main(){
	
	system("color a");
	int tot, i = 0, voti[i], somma = 0, media, sommah;
	
	for ( ;; )
	
	{
	
	    cout << "Numero totale voti? ";
		cin >> tot;
		
		for (i; i < tot; i++)
		
		{
	        cout << "Inserisci voto " << i + 1 << ": ";
			cin >> voti[i];
			
			while (voti[i] > 10 || voti[i] < 0)
			
			{
			    cout << "Inserire un numero compreso tra 0 e 10: ";
			    cin >> voti[i];
			}
		}
	
		for(i; i < tot; i++)
	
		{
		    somma = somma + voti[i];
		}
	
		media = somma / tot;
		cout << "Media: " << media << "\n\n";
	
	}
	
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
