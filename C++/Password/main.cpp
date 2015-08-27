#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    
    system("color a");
    string passwordvera, password; // const string?
    passwordvera = "uno due tre quattro";
    cout << "Inserisci password: ";
    getline(cin, password);

/* 
for (unsigned int i = 0; i < 3; i++){
if(password==passwordvera) break;
else {cout << "\nPassword errata, " << 3 - i << " tentativi rimanenti: ";
getline(cin, password);}}
*/    
    while (password != passwordvera)
    
    {
        cerr << "\nPassword errata, 2 tentativi rimanente: ";
        getline(cin, password);
        
        if (password != passwordvera)
        
        {
            cerr << "\nPassword errata, 1 tentativo rimanente: ";
            getline(cin, password);
            
            if (password != passwordvera)
            
            {
                cerr << "\nPassword errata, 0 tentativi rimanenti";
                goto fine;
            }
            
        }
            
    }
    
    cout << "\n\nPassword corretta!";
    
    fine:
    
    cout << "\n\nPremi Invio per uscire: ";
    cin.ignore();
    cin.get();
    return EXIT_SUCCESS;
}
