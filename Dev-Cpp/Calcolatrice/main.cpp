#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main(){

    system("color a");
	string b;
	float a, c, d;
	cout << "PannubaCalc 0.0.1 beta";
	
	for ( ;; )
	
	{
        cout << "\n\nInserisci il primo valore: ";
        cin >> a;
        cout << "\nL'operazione dev'essere:\n\nuna somma\nuna sottrazione\nuna moltiplicazione\nuna divisione\nil calcolo di una radice\nun elevamento a potenza? ";
        cin >> b;
        
        while (b != "somma" && b != "sottrazione" && b != "moltiplicazione" && b != "divisione" && b != "potenza" && b != "radice")
        
        {
            cout << "\nInserisci un tipo di operazione: ";
            cin >> b;
        }
        
        if (b == "somma")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
            d = a + c;
            cout << "\nIl risultato e': " << d << "\n\n";
        }
        
        if (b == "sottrazione")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
            d = a - c;
            cout << "\nIl risultato e': " << d << "\n\n";
        }
        
        if (b == "moltiplicazione")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
            d = a*c;
            cout << "\nIl risultato e': " << d << "\n\n";
        }
        
        if (b == "divisione")
        
        {
            cout << "\nInserisci il secondo valore: ";
            cin >> c;
              
            while (c == 0)
              
            {
                cout << "\nInserisci un valore che non sia 0: ";
                cin >> c;
            }
	      
            d = a / c;
            cout << "\nIl risultato e': " << d << "\n\n";
        }
        
        if (b == "radice")
        
        {
            c = sqrt(a);
            cout << "\nIl risultato e': " << c << "\n\n";
        }
        
        if (b == "potenza")
        
        {
            cout << "\nInserisci l'esponente: ";
            cin >> c;
            d = pow(a, c);
            cout<<"\nIl risultato e': " << d << "\n\n";
        }
	
    }		
			
	cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
	cin.get();
    return EXIT_SUCCESS;
}
