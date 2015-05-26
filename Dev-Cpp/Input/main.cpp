#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
	
	system ("color a");
	cout << "Tecst Editor\n\n";
	string testo;
    ofstream file;
    file.open("zeDispenser.txt");
    getline (cin, testo); // Il file che crea si chiama zeDispenser.txt // Aggiungere percorso?
	file << testo; // Scrive nel file questa robba
    cout << "\n\nPremi qualsiasi tasto per uscire";
    cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
