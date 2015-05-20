#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    system("color a");
	string operazione;
	float a, c, risultato;
	cout << "PannubaCalc";
	
	for ( ;; )
	
	{
        cout << "\n\nInserisci il primo valore: ";
        cin >> a;
        cout << "\nL'operazione dev'essere una:\n\nsomma\nsottrazione\nmoltiplicazione\ndivisione\ncalcolo di una radice\nelevamento a potenza? ";
        cin >> operazione;
        
        while (operazione != "somma" && operazione != "+" && operazione != "sottrazione" && operazione != "-" && operazione != "moltiplicazione" && operazione != "x" && operazione != "divisione" && operazione != ":" && operazione != "potenza" && operazione != "elevamento" && operazione != "radice")
        
        {
            cout << "\nInserisci un tipo di operazione: ";
            cin >> operazione;
        }
        
        if (operazione == "somma" || operazione == "+")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
            risultato = a + c;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "sottrazione" || operazione == "-")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
            risultato = a - c;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "moltiplicazione" || operazione == "x")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
            risultato = a*c;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "divisione" || operazione == ":")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
              
            while (c == 0)
              
            {
                cout << "\nInserisci un valore che non sia 0: ";
                cin >> c;
            }
	      
            risultato = a / c;
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "radice")
        
        {
            
            while (a < 0)
            
            {
                cout << "\nLa radice quadrata di un numero negativo non esiste! Reinserire numero: ";
                cin >> a;
            }
            
            risultato = sqrt(a);
            cout << "\nIl risultato e' " << risultato << "\n\n";
        }
        
        if (operazione == "potenza" || operazione == "elevamento")
        
        {
            cout << "\nInserisci l'esponente: ";
            cin >> c;
            risultato = powf(a, c);
            cout<<"\nIl risultato e' " << risultato << "\n\n";
        }
	
    }		
			
	cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
	cin.get();
    return EXIT_SUCCESS;
}
