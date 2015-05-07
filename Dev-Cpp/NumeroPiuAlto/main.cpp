#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    system("color a");
    string giocatore1, giocatore2, giocare;    
    float a, b;
    cout << "In questo gioco vince chi inserisce il numero piu alto\n\nGiocatore 1, come ti chiami? ";
    cin >> giocatore1;
    cout << "\nGiocatore 2, come ti chiami? ";
    cin >> giocatore2;
    
    for ( ;; )
    
    {
        
        cout << "\n\n" << giocatore1 << ", inserisci il primo numero: ";
        cin >> a;
        system("CLS");
        cout << giocatore2 << ", inserisci il secondo numero: ";
        cin >> b;
        system("CLS");
    
        if (a > b)
    
        {
            cout << "Ha vinto " << giocatore1 << "!!!\n\n";
        }
    
        if (a < b)
    
        {
            cout << "Ha vinto " << giocatore2 << "!!!\n\n";
        }
    
        else if (a == b)
    
        {
            cout << "Avete perso tutti e due balordi babbei (cit. Babu)\n\n";
        }
        
        cout << "Volete giocare ancora? ";
        cin >> giocare;
        
        if (giocare == "si")
        
        {
        
        }
        
        if (giocare == "no")
        
        {
            break;
        }
        
    
    }
    
    cin.ignore();
    cin.get();    
    return EXIT_SUCCESS;
}
