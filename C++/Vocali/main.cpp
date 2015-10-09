#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	system("color a");
	const char vocali[] = "aeiou";
	unsigned int i, j, numvocali;
	string linea;
	cout << "PannTrovaVocali";
	
	for ( ;; )
	
	{
		cout << "\n\nScrivi una frase o parola: ";
		getline (cin, linea);
		
		for (i = 0; i < linea.length(); i++)
		
		{
			for (j = 0; j < 5; j++)
			
			{
				if (linea[i] == vocali[j])
					numvocali++;
			
			}
			
		}
		
		cout << "\n\nvocali tot: " << numvocali << "\n\n";
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
