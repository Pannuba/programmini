#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    system("color a");
    string passwordvera, password;
    passwordvera = "psw";
    cout << "Inserisci password: ";
    cin >> password;
    
    while (password != passwordvera)
    
    {
        cout << "\nPassword errata, 2 tentativi rimanente: ";
        cin >> password;
        
        if (password != passwordvera)
        
        {
            cout << "\nPassword errata, 1 tentativo rimanente: ";
            cin >> password;
            
            if (password != passwordvera)
            
            {
                cout << "\nPassword errata, 0 tentativi rimanenti";
                goto fine;
            }
            
        }
            
    }
    
    cout << "\n\nPassword corretta!";
    
    fine:
    
    cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
    cin.get();    
    return EXIT_SUCCESS;
}
