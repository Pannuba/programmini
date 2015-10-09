#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	system("color a");
	unsigned int i, votiok, tot;
	float *voti, somma, media;
	cout << "PannCalcolaMedie\n\n";
	
	for ( ;; )
	
	{
		votiok = 0;
		somma = 0;
		cout << "Numero totale voti? ";
		cin >> tot;
		
		while (tot % tot != 0)  // aiuto non va
		
		{
			cout << "Inserisci un numero intero: ";
			cin >> tot;
		}
		
		voti = (float*) malloc(tot * sizeof(float));
		cout << "\n";
		
		for (i = 0; i < tot; i++)
		
		{
			cout << "Inserisci voto " << i + 1 << ": ";
			cin >> voti[i];
			
			while (voti[i] > 10 || voti[i] < 0)
			
			{
				cerr << "Inserisci un numero compreso tra 0 e 10: ";
				cin >> voti[i];
			}
			
		}

		for (i = 0; i < tot; i++)                /* Devo rimettere i = 0 altrimenti usa l'i = n di prima */
			somma = somma + voti[i];
		
		media = somma / tot;
		cout << "\nMedia: " << media << "\n\n";
		
		for (i = 0; i < tot; i++)
		
		{
			if (voti[i] >= 6)
				votiok++;
		}
        	
		if (votiok <= 0)
		
		{
			cout << "Voti sufficienti: 0    (ahia...)";
			cout << "\nVoti insufficienti: " << tot << "\n\n\n\n";
		}
		
		else
		
		{
			cout << "Voti sufficienti: " << votiok;
			cout << "\nVoti insufficienti: " << tot - votiok << "\n\n\n\n";
		}
        
		free(voti);
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
