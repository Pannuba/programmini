#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/* Patetico tentativo a algoritmo per trovare moda - non funziona */
float getModa(float *valori, unsigned int tot)

{
	float moda = 0;
	unsigned int count, *countarr = (unsigned int*) malloc(tot * sizeof(unsigned int)), i = 0; //countarr[256], /* Avrei messo countarr[tot] ma mi da un warning xdxdxd!!!1 */
	
	while (i < tot)
	
	{
		si:
		
		if (valori[i] == valori[i + 1])   /* 1, 2, 3, 3 */
		
		{ 
			count++;  /* Non si salva il valore in countarr secondo l'esempio (3, 3 finali) */
			i++;
			goto si;
		}
		
		else if (valori[i] != valori[i + 1])
		
		{
			count = countarr[i];    /* Countarr contiene quante volte appare ogni valore */
			count = 1;
			i++;
		}
	
	}
	
	for (i = 0; i < tot; i++)
		cout << "\n" << countarr[i];
	
	/* Trovare il valore piu' grande di countArr, cercare di capire come associare un elemento di countArr a valori[] */
	
	/*unsigned int magg = 0;
	
	for (i = 0; i < tot; i++)
	
	{
	if(countarr[i] > magg)
	magg = countarr[i];
	}
	cout << magg;*/
	
	return moda;
}

int main(){
	
	system("color a");
	unsigned int i, j, tot, med1, med2;
	float *valori, somma, media, hold, mediana, cvar, scr, scarto, dev, deviazione, err;
	cout << "PannCoseSullaStatistica";
	
	for ( ;; )
	
	{
		tot = 1;
		valori = (float*) malloc(sizeof(float)); // Inserisco 1 unità nel vettore
		cout << "\n";
		
		while (true)
		
		{
			cout << "\nInserisci valore " << tot << ": ";
			
			if(!(cin >> valori[tot]))   /* Se l'input non è un numero */
			
			{
				cin.clear();
				cin.sync();
				break;
			}
			
			tot+=2;
			valori = (float*) realloc(valori, (tot) * sizeof(float)); /* Non so perchè ma senza il + 1 non va */
		}
		
		somma = 0;
		
		for (i = 0; i < tot; i++)                /* Devo rimettere i = 0 altrimenti usa l'i = n di prima */
			somma += valori[i];
		
		media = somma / tot;
		cout << "\nMedia: " << media;
		
		for (i = 0; i < (tot - 1); i++)			/* Bubble-Sorting algorithm */
		
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
		
		cvar = 0;
		cvar = valori[tot - 1] - valori[0];
		cout << "\n\nCampo di variazione: " << cvar;
		
		if (tot % 2 == true)							/* Se i valori totali sono dispari */
		
		{
			med1 = tot / 2 + 0.5;
			mediana = valori[med1];
			cout << "    Mediana: " << mediana;
		}
	
		else											/* Se pari */
		
		{
			med1 = (tot / 2 + 1) - 1;
			med2 = (tot / 2) - 1;
			mediana = (valori[med1] + valori[med2]) / 2;
			cout << "    Mediana: " << mediana;
		}
		
		scr = 0;
		
		for (i = 0; i < tot; i++)
			scr += abs(valori[i] - media);
		
		scarto = scr / tot;
		cout << "\n\nScarto semplice medio: " << scarto;
		dev = 0;
		
		for (i = 0; i < tot; i++)
			dev += powf(valori[i] - media, 2);
		
		deviazione = sqrt(dev / tot);
		cout << "    Deviazione standard: " << deviazione;
		err = 0;
		err = deviazione / sqrtf(tot - 1);
		cout << "\n\nErrore standard: " << err << "\n\n";
		free(valori);
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
