#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main(){

    system("color a");
	string operazione;
	float primo, secondo, risultato;
	cout << "PannubaCalc";
	
	for ( ;; )
	
	{
        cout << "\n\nInserisci il primo valore: ";
        cin >> primo;
		
        cout << "\nL'operazione dev'essere una:\n\nsomma\nsottrazione\nmoltiplicazione\ndivisione\ncalcolo di una radice\nelevamento a potenza? ";
        cin >> operazione;
        
        while (operazione != "somma" && operazione != "+" && operazione != "sottrazione" && operazione != "-" && operazione != "moltiplicazione" && operazione != "x" && operazione != "divisione" && operazione != ":" && operazione != "potenza" && operazione != "elevamento" && operazione != "radice")
        
        {
            cerr << "\nInserisci un tipo di operazione: ";
            cin >> operazione;
        }
        
        if (operazione == "somma" || operazione == "+")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> secondo;
			risultato = primo + secondo;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "sottrazione" || operazione == "-")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> secondo;
            risultato = primo - secondo;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "moltiplicazione" || operazione == "x")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> secondo;
            risultato = primo * secondo;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "divisione" || operazione == ":")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> secondo;
            
            while (secondo == 0)
              
            {
                cerr << "\nInserisci un valore che non sia 0: ";
                cin >> secondo;
            }
	      
            risultato = primo / secondo;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "radice")
        
        {
            
            while (primo < 0)
            
            {
                cerr << "\nLa radice quadrata di un numero negativo non esiste! Reinserire numero: ";
                cin >> primo;	
            }
            
            risultato = sqrtf(primo);
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "potenza" || operazione == "elevamento")
        
        {
            cout << "\nInserisci l'esponente: ";
            cin >> secondo;
            risultato = powf(primo, secondo);
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
	
    }		
			
	cout << "\n\nPremi Invio per uscire: ";
    cin.ignore();
    return EXIT_SUCCESS;
}
