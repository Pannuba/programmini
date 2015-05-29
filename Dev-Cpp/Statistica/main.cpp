#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	
	system("color a");
	int tot, i = 0, j = 0, med1, med2;
    float valori[i], somma, media, hold, mediana, cvar, scr, scarto, dev, deviazione;      // Se tolgo i = 0 va in crisi
    
    cout << "PannCoseSullaStatistica";
    
	for ( ;; )
	
	{
        somma = 0;
        mediana = 0;
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
	
        /*cout << "\n\nIn ordine dal piu basso al piu alto sono:\n\n";

        for (i = 0; i < tot; i++)
	
        { 												//  QUESTO NON SERVE!!!!!!!!1 
	        cout << valori[i] << endl;
        }*/
        //tot2 = tot / 2;
        
        if (tot / 2 != static_cast <int> (tot / 2))			// se i valori totali sono dispari
        
		{
			med1 = (tot / 2 + 0.5) - 1;								//non va
		    mediana = valori[med1];
		    cout << "\n\nMediana: " << mediana;
		}
		
		else												//se pari
		
		{
		    med1 = (tot / 2 + 1) - 1;
		    med2 = (tot / 2) - 1;
		    mediana = (valori[med1] + valori[med2]) / 2;
		    cout << "\n\nMediana: " << mediana;
		}
		
        cvar = valori[tot - 1] - valori[0];
        cout << "\n\nCampo di variazione: " << cvar;
        scr = 0;
        
        for (i = 0; i < tot; i++)
        
        {
            scr = scr + (valori[i] - media);
        }
        
        scarto = scr / tot;
        cout << "\n\nScarto semplice medio: " << scarto;
        dev = 0;
        
        for (i = 0; i < tot; i++)
        
        {
            dev = dev + powf(valori[i] - media, 2);
        }
        
        deviazione = sqrt(dev / tot);
        cout << "\n\nDeviazione standard: " << deviazione;
	}
	
	cout << "\n\nPremere un qualsiasi tasto per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
