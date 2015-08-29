#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
 
class Persona
 
{
    public:
    	string nome;
    	string cognome;
    	unsigned int eta;
    	unsigned int altezza;
};
 
int main(){
	
	unsigned int tot;
	ofstream file("lel.txt");
	file.open("lel.txt");
	system("color a");
	cout << "PannCaratterizzazionePersone(?)\n\nNumero totale persone? "; // \n\n o \n\n\n\n
	cin >> tot;
	
	for (int i = 0; i < tot; i++)
	
	{
		cout << "Inserisci nome persona " << i + 1 << " : ";
		cin.ignore();
		getline (cin, Persona.nome);
		file << "Nome: " << lol.nome;
		cout << "\nCognome? ";
		getline(cin, lol.cognome);
        file << "\n\nCognome: " << lol.cognome;
		cout << "\nEtà ? ";
		cin >> lol.eta;
        file << "\n\nEtà : " << lol.eta;
		cout << "\n\nAltezza? ";
		cin >> lol.altezza;
        file << "\n\nAltezza:" << lol.altezza;
        file << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cin.ignore();
	}
	
	file.close();
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
    cin.get();
	return EXIT_SUCCESS;
}
