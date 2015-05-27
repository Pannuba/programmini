#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    system("color a");   
    float a, b, c, delta, xuno, xdue;
    cout << "PannRisolutoreDiEquazioniDiSecondoGrado";
    cout << "\n\nInserisci i valori a, b, c dell'equazione ax2 + bx + c = 0 :";
    
    for ( ;; )
    
    {
        cout << "\n\na = ";  
        cin >> a;
                    
        while (cin.fail() == true)
		
		{
    	    cin.clear();
    		cerr << "\nInserisci un numero: ";
    		cin.ignore();
    		cin >> a;
		}
            
        while (a == 0)
        
        {
            cerr << "\nPer essere un'equazione di secondo grado, a non dev'essere uguale a 0\n\na = ";
            cin >> a;
        }
        
        cout << "\nb = ";
        cin >> b;
                    
        while (cin.fail() == true)
		
		{
    	    cin.clear();
    		cerr << "\nInserisci un numero: ";
    		cin.ignore();
    		cin >> b;
		}
            
        cout << "\nc = ";
        cin >> c;
                    
        while (cin.fail() == true)
		
		{
    	    cin.clear();
    		cerr << "\nInserisci un numero: ";
    		cin.ignore();
    		cin >> c;
		}
            
    
        delta = (b*b) - (4 * a*c); /* No pow(b, 2) ma b * b perche pow converte la variabile in double */
    
        if (delta < 0)
    
        {
            cout << "\n\nIl delta e' minore di 0, quindi non esistono soluzioni all'equazione\n\n";
        }
    
        if (delta == 0)
    
        {              
            cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
            xuno = -b / (2 * a);
            cout << "x1 = x2 = " << xuno << "\n\nProdotto: " << xuno*xuno << "    Somma: " << xuno * 2 << "\n\n";
        }
    
        else if (delta > 0)
    
        {    
            xuno = (-b - sqrt(delta)) / (2 * a);
            xdue = (-b + sqrt(delta)) / (2 * a);
            cout << "\n\nx1 = " << xuno << "    x2 = " << xdue << "\n\nProdotto: " << xuno*xdue << "    Somma: " << xuno + xdue << "\n\n";
        }
    
    }
    
    cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
	cin.get();
    return EXIT_SUCCESS;
    
}
