#include <iostream>
#include <cstdlib>
#include <fstream>
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
	
	unsigned int tot, i, j;
	ofstream file("lel.txt");
	system("color a");
	cout << "PannCaratterizzazionePersone(?)\n\nNumero totale persone? ";
	cin >> tot;
	
	for (i = 0; i < tot; i++)
	
	{
		for (j = 0; j < tot; j++)
		
		{
			string classname = "persona " + to_string( i );
		}	
		
		Persona classname;
		cout << "\nInserisci nome persona " << i + 1 << ": ";
		cin.ignore();
		getline (cin, classname.nome);
		file << "Nome: " << classname.nome;
		cout << "\nCognome? ";
		getline(cin, classname.cognome);
		file << "\n\nCognome: " << classname.cognome;
		cout << "\nEtà ? ";
		cin >> classname.eta;
		file << "\n\nEtà : " << classname.eta;
		cout << "\n\nAltezza? ";
		cin >> classname.altezza;
		file << "\n\nAltezza:" << classname.altezza;
		file << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		cin.ignore();
	}
	
	file.close();
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
