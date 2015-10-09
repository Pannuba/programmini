#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
	
	system ("color a");
	cout << "PannTecstEditor - scrivi \"HOSMESSODISCRIVEREH\" per terminare l'input\n\n";
	string testo;
	ofstream file;
	file.open("zeDispenser.txt");
	getline (cin, testo); // Il file che crea si chiama zeDispenser.txt Aggiungere percorso?
	file << testo; // Scrive nel file questa robba
	string parag;
	unsigned int dimensione;
	for (int i = 0; i < dimensione; i++)
	{
		getline(cin, parag);
	
		if (parag == "HOSMESSODISCRIVEREH") // "" o " "??
		
		{
			goto fine;
		}
		
		system("cls"); // sorry
		cout << parag[i] << "\n\n";
		dimensione++;
		tot += i;
	}
	
	fine:
	
	for (int i = 0; i < parag[tot]; i++)
	{
		file << parag[i] << "\n\n"
	}
*/
	
	cout << "\n\nPremi Invio per uscire: ";
	file.close();
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
