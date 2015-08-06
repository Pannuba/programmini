#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;
 
struct Persona
 
{
    int eta;
    int altezza;
};
 
int main(){

	system("color a");
	cout << "num tot persone? ";
	int tot;
	string nome;
	ofstream file("lel.txt");
	cin >> tot;
	file.open("lel.txt");
	
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
		cin>>nome.altezza; file << "\n\n" << nome.altezza;
		cin.ignore();
	}
	
	file.close();
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	return EXIT_SUCCESS;
}
