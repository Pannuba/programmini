#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    
	system("color a");
	string giocatore1, giocatore2, giocare;    
	unsigned int a, b;
	cout << "In questo gioco vince chi inserisce il numero piu alto\n\nGiocatore 1, come ti chiami? ";
	getline(cin, giocatore1);
	cout << "\nGiocatore 2, come ti chiami? ";
	getline(cin, giocatore2);
	
	for ( ;; )
	
	{	
		cout << "\n\n" << giocatore1 << ", inserisci il primo numero: ";
		cin >> a;
		cout << giocatore2 << ", inserisci il secondo numero: ";
		cin >> b;

		if (a > b)
			cout << "\nHa vinto " << giocatore1 << "!!!\n\n";
		
		if (a < b)
			cout << "\nHa vinto " << giocatore2 << "!!!\n\n";
		
		else if (a == b)
			cout << "\nAvete perso tutti e due!\n\n";
		
		cout << "Volete giocare ancora? ";
		cin >> giocare;

		while (giocare != "si" && giocare != "no")
	
		{
			cerr << "\nInserire \"si\" o \"no\" :";
			cin >> giocare;
		}
		
		if (giocare == "si")
			cout << "\n\n";
		
		if (giocare == "no")
			break;
		
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
