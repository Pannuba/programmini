#include <iostream>
#include <cstdlib>
#include <string>
#include <omino.h>
using namespace std;

/*void creaparola()

{
	char lettere[]*/

int main(){
	
	system("color a");
	cout << "PannImpiccato";
	string giocare, parola = "correct horse battery staple";
	bool gioca = true;
	int vite;
	
	while (gioca)
	
	{
		//creaparola();
		cout << "\n\nInserisci una lettera o indovina la parola! ";
		vite = 10;
		
		while (vite != 0)
		
		{
			string input;
			getline(cin, input);
			
			if (input == parola)
			
			{
				cout << "\n\nEsatto!\n\nVuoi giocare ancora? ";
				cin >> giocare;
				
				if (giocare == "no" || giocare == "No")
				
				{
					gioca = false;
					break;
				}
				
				else
				
				{
					break;
				}
				
			}
			
			else
			
			{
				vite--;
				
				switch (vite)
				
				{
					case 9:
						system("cls");
						omino0();
						break;
						
					case 8:
						system("cls");
						omino1();
						break;
					
					case 7:
						system("cls");
						omino2();
						break;
					
					case 6:
						system("cls");
						omino3();
						break;
						
					case 5:
						system("cls");
						omino4();
						break;
						
					case 4:
						system("cls");
						omino5();
						break;
						
					case 3:
						system("cls");
						omino6();
						break;
					
					case 2:
						system("cls");
						omino7();
						break;
						
					case 1:
						system("cls");
						omino8();
						break;
						
					case 0:
						omino9();
						cout << "\n\nGame Over :(";
						cout << "\n\nVuoi giocare ancora? ";
						cin >> giocare;
						
						if (giocare == "no" || giocare == "No")
						
						{
						    gioca = false;
							break;
						}
						
						else
						
						{
							vite = 10 + 1;
							break;
						}
							
				}
				
			}
			
		}
		
	}
	
	cout << "\n\nPremi invio per uscire: ";
	cin.get();
	cin.ignore();
	return EXIT_SUCCESS;
}