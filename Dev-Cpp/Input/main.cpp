#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ofstream file;
	int uno, due, tre;
	cin >> uno; cin >> due; cin >> tre;
	file.open("zeDispenser.heh"); // Il file che crea si chiama zeDispenser.heh // Aggiungere percorso?
	file << uno << ", " << due << ", " << tre; // Scrive nel file questa roba
	cin.ignore();
	cin.get();
	return 0;
}
