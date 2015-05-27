#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
int main(){
	
	system("color a");
	unsigned long long int i = 0, j = 0;
    float tot, valori[i], somma, media, hold;         // Se tolgo i = 0 va in crisi
    
    cout << "PannCoseSullaStatistica";
    
	for ( ;; )
	
	{
        somma = 0;
        cout << "\n\nNumero totale elementi? ";
		cin >> tot;
		
		while (cin.fail() == true)
		
		{
    	    cin.clear();
    		cerr << "\nInserisci un numero: ";
    		cin.ignore();
    		cin >> tot;
		}
		
        float a = tot;
		cout << "\n";
		
        for (i = 0; i < tot; i++)
		
		{
	        cout << "Inserisci elemento " << i + 1 << ": ";
			cin >> valori[i];
			
			while (cin.fail() == true)
		
			{
    	    	cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> valori[i];
			}
			
		}

		for (i = 0; i < tot; i++)                /* Devo rimettere i = 0 altrimenti usa l'i = n di prima */

		{
		    somma = somma + valori[i];
		}
	
		media = somma / tot;
		cout << "\nMedia: " << media;
		
        for (i = 0; i < (tot - 1); i++)
        
        {
	        
            for (j = 0; j < (tot - 1); j++)
	
            {
	
                if (valori[j] > valori[j + 1])
            
                {
                    hold = valori[j];
                    valori[j] = valori[j + 1];
                    valori[j + 1] = hold;
                }
                    
            }
	
        }
	
        cout << "\n\nIn ordine dal piu basso al piu alto sono:\n\n";

        for (i = 0; i < tot; i++)
	
        {
	        cout << valori[i] << endl;
        }   
            
	}
	
	cout << "\n\nPremere un qualsiasi tasto per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
