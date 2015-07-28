#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	
	system("color a");
	char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
	int vocali = 0;
	string linea;
	cout << "PannTrovaVocali";
	
	for ( ;; )
	
	{
	    cout << "\n\nScrivi una frase o parola: ";
		getline (cin, linea);
		
		for (int i = 0; i < linea.length(); i++)
		
		{
		    for (int j = 0; j < 5; j++)
			
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
