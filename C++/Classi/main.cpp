#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
 
struct Persona
 
{
    int eta;
    int altezzA;
};
 
int main(){
 
	cout << "num tot persone? ";
	int tot;
	string nome;
	string fiee = "lel.txt";
	ofstream file(fiee);
	cin >> tot;
	file.open;
	
	for (int i = 0; i < tot; i++)
	
	{
		
		cout << "inserisci nome persona " << i + 1 << " : ";
		cin.ignore();
		getline (cin, nome);
		file << nome;
		Persona nome;
		cout << "\neta? ";
		cin >> nome.eta; file << "\n\n" << nome.eta;
		cout << "\n\naltessa? ";
		cin>>nome.altezzA; file << "\n\n" << nome.altezzA;
		cin.ignore();
	}
	
	file.close();
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	return EXIT_SUCCESS;
}
