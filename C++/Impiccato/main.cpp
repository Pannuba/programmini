#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "omino.h"
using namespace std;

int main(){
	
	srand((unsigned)time(0));
	system("color a");
	cout << "PannImpiccato";
	string giocare, parole[4] = {"correct", "horse", "battery", "staple"};
	bool gioca = true;
	unsigned int vite;
	
	while (gioca)
	
	{
		cout << "\n\nInserisci una lettera o indovina la parola! ";
		vite = 10;
		string parola = parole[rand() % 4];
		string input;
		
		while (vite != 0)
		
		{
			getline(cin, input);
			
			if (input.length() > 1)
			
			{
				
				if (input == parola)
			
				{
					cout << "\n\nEsatto!\n\nVuoi giocare ancora? ";
					cin >> giocare;
				
					if (giocare == "no" || giocare == "No")
				
					{
						gioca = false;
					}
					
				}
				
				else
				
				{
					cout << "\nSbagliato! Hai perso una vita :D";
					vite--;
				}
				
			}
			
			else if (input.lenght() == 1)
			
			{
				
				
				
			}
			
		}
		
	}
	
	cout << "\n\nPremi invio per uscire: ";
	cin.get();
	cin.sync();
	return EXIT_SUCCESS;
}
