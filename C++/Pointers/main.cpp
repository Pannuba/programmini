#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	cout << "Test sui puntatori\n\n";
	
	char carattere, arraynormale[12], *pointerarray, *pointerarray12 = (char*) malloc(12 * sizeof(char));
	cout << "Dimensione carattere: " << sizeof(carattere)
	     << "\n\nDimensione array[]: " << sizeof(arraynormale)
	     << "\n\nDimensione *array: " << sizeof(pointerarray)
	     << "\n\nDimensione *array12: " << sizeof(pointerarray12);
	
	int *puntatore, numero = 12;
	puntatore = &numero;
	cout << "\n\nValore puntatore iniziale: " << puntatore;
		
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
