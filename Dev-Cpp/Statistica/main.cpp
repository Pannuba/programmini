#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

int main(){
	
	system("color a");
	int i = 0;
    float tot, valori[i], somma, media;         // Se tolgo i = 0 va in crisi
    cout << "PannCoseSullaStatistica\n\n";
    
	for ( ;; )
	
	{
        somma = 0;
        cout << "Numero totale elementi? ";
		cin >> tot;
		cout << "\n";
		
        for (i = 0; i < tot; i++)
		
		{
	        cout << "Inserisci elemento " << i + 1 << ": ";
			cin >> valori[i];
		}

		for (i = 0; i < tot; i++)                /* Devo rimettere i = 0 altrimenti usa l'i = n di prima */
	
		{
		    somma = somma + valori[i];
		}
	
		media = somma / tot;
		cout << "\nMedia: " << media << "\n\n";
	}
	
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
