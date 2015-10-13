#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Omino.h"
using namespace std;

int main(){
	
	srand((unsigned)time(0));
	
	#ifdef _WIN32			/* Se siamo su Windows (_WIN32 include _WIN64) */
		system("mode 100");
		system("color a");
	#endif
	
	cout << "PannImpiccato";
	string input, parola, spazi;
	const string parole[4] = {"correct", "horse", "battery", "staple"};
	bool gioca = true;
	unsigned int vite, i;
	signed int count = -1;
	char scelta, lettera;
	Omino omino;
	
	while (gioca == true)
	
	{
		vite = 10;
		parola = parole[rand() % 4];
		input = "";
		
		while (vite != 0)
		
		{
			cin.sync();
			cout << "\n\nInserisci una lettera (1) o indovina la parola! (2)\t\t(vite: " << vite << ") ";
			scelta = cin.get();
			
			while (scelta != '1' && scelta != '2')
			
			{
				cerr << "\nInserisci 1 o 2: ";
				cin.sync();
				scelta = cin.get();
			}
			
			if (scelta == '1')
			
			{
				cout << "\n\nInserisci una lettera: ";
				cin.sync();
				lettera = cin.get();
				spazi = "";
				
				for (i = 0; i < parola.length(); i++)
				
				{
					spazi += '_';
					
					if (lettera == parola[i])
						count++;
				}
				
				if (count != -1)
				
				{
					if (count >= 2)
						cout << "\nEsatto! La lettera e' presente " << count << " volte nella parola.\n\n";
						
					else
						cout << "\nEsatto! La lettera e' presente una volta nella parola.\n\n";
						
					spazi.replace(spazi.begin(), spazi.end(), '_', lettera);	/* Qui fa casino */
					cout << "\n\n" << spazi;
				}
				
				else
					vite = omino.sbagliato(vite);
				
			}
			
			else if (scelta == '2')
			
			{
				cout << "\n\nTenta una parola, e inserisci la fortuna! ";
				cin.sync();
				getline(cin, input);
				
				if (input == parola)
			
				{
					cout << "\n\nEsatto!";
					omino.giocareAncora(&vite, &gioca);
				}
				
				else
				
				{
					vite = omino.sbagliato(vite);
					
					if (vite == 0)
						omino.giocareAncora(&vite, &gioca);
				}
					
			}
			
		}
		
	}
	
	cout << "\n\nPremi invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
