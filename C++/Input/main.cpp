#include <iostream>
#include <cstdlib>
#include <fstream>
#include <conio.h>
using namespace std;

int main(){
	
	system ("color a");
	cout << "PannTecstEditor\n\n";
	string testo;
    ofstream file;
    file.open("zeDispenser.txt");
    getline (cin, testo); // Il file che crea si chiama zeDispenser.txt // Aggiungere percorso?
	file << testo; // Scrive nel file questa robba
    cout << "\n\nPremi Invio per uscire: ";
    file.close();
    cin.ignore();
	return EXIT_SUCCESS;
}
