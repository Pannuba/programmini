#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	
	system("color a");
	const char vowels[] = "aeiou";
	unsigned int i, j, vocali;
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
			    if (linea[i] == vowels[j])
				
				{
					vocali++;
				}
			
			}
			
		}
	
		cout << "\n\nvocali tot: " << vocali << "\n\n";
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}

