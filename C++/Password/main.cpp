#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

	system("color a");
	const string passwordvera = "uno due tre quattro";
	string password;
	unsigned int i;
	cout << "Inserisci password: ";
	getline(cin, password);
	
	for (i = 0; i < 5; i++)
	
	{
		
		if (password == passwordvera)
		
		{
			cout << "\n\nPassword corretta!";
			break;
		}
		
		else if (i == 4)
		
		{
			cout << "\nNon hai piu' tentativi :(";
			break;
		}
		
		else
		
		{
			cout << "\nPassword errata, " << 3 - i << " tentativi rimanenti: ";
			getline(cin, password);
		}
	
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
