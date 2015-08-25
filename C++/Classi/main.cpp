#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
 
class Persona
 
{
    public:

        string cognome;
        unsigned int eta;
        unsigned int altezza;
};
 
int main(){

	system("color a");
	cout << "PannCaratterizzazionePersone(?)\n\nNumero totale persone? "; // \n\n o \n\n\n\n
	unsigned int tot;
	string nome;
	ofstream file("lel.txt");
	cin >> tot;
	file.open("lel.txt");
	
	for (int i = 0; i < tot; i++)
	
	{
		
		cout << "Inserisci nome persona " << i + 1 << " : ";
		cin.ignore();
		getline (cin, nome);
                Persona nome;
		file << "Nome: " << nome;
		cout << "\nCognome? ";
		getline(cin, nome.cognome);
                file << "\n\nCognome: " << nome.cognome;
		cout << "\nEtà? ";
		cin >> nome.eta;
                file << "\n\nEtà: " << nome.eta;
		cout << "\n\nAltezza? ";
		cin >> nome.altezza;
                file << "\n\nAltezza:" << nome.altezza;
                file << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cin.ignore();
	}
	
	file.close();
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
        cin.get();
	return EXIT_SUCCESS;
}
