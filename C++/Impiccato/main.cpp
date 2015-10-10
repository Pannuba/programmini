#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Omino.h"
using namespace std;

int main(){
	
	srand((unsigned)time(0));
	
	#ifndef __linux__		/* Se siamo su Windows */
		system("mode 100");
		system("color a");
	#endif
	
	cout << "PannImpiccato";
	string giocare, input, parola;
	const string parole[4] = {"correct", "horse", "battery", "staple"};
	bool gioca = true;
	unsigned int vite, i;
	char scelta, lettera;
	Omino omino;
	
	while (gioca == true)
	
	{
		//cout << "\n\nInserisci una lettera (1) o indovina la parola! (2) ";
		vite = 10;
		parola = parole[rand() % 4];
		input = "";
		
		while (vite != 0)
		
		{
			cout << "\n\nInserisci una lettera (1) o indovina la parola! (2)\t\t(vite: " << vite << ")\t";
			scelta = cin.get();
			
			while (scelta != '1' && scelta != '2')
			
			{
				cerr << "\nInserisci 1 o 2: ";
				scelta = cin.get();
			}
			
			if (scelta == '1')
			
			{
				cout << "\n\nInserisciii, unaaa, letteraah!!! ";
				cin.sync();
				lettera = cin.get();
				
				for (i = 0; i < parola.length(); i++)		/* "cavallo" - lettera v */
				
				{
					if (lettera == parola[i]) // Se più di una?
					
					{
						cout << "Esattoh! La lettera è presente nella parola!!!111!1!!!1!11";
					}
					
					else
					
					{cout << "no";}
				}
				
			}
			
			else if (scelta == '2')
			
			{
				cout << "\n\nTenta una parola, e inserisci la fortuna! ";
				cin.sync();
				getline(cin, input);
				
				if (input == parola)
			
				{
					cout << "\n\nEsatto!\n\nVuoi giocare ancora? ";
					cin >> giocare;
				
					if (giocare == "no" || giocare == "No")
						gioca = false;
					
				}
				
				else
				
				{
					cout << "\nSbagliato! Hai perso una vita :D\n\n";
					vite--;
					
					switch (vite)
					
					{
						case 9:
							omino.frame();
							break;
							
						case 8:
							omino.frame1();
							break;
						
						case 7:
							omino.frame2();
							break;
							
						case 6:
							omino.frame3();
							break;
						
						case 5:
							omino.frame4();
							break;
							
						case 4:
							omino.frame5();
							break;
							
						case 3:
							omino.frame6();
							break;
							
						case 2:
							omino.frame7();
							break;
							
						case 1:
							omino.frame8();
							break;
							
						case 0:
							omino.frame9();
							cout << "\n\nHai perso!\t\tvite: 0\n";
							break;
					}
						
				}
					
			}
			
		}
		
	}
	
	cout << "\n\nPremi invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
