#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){

    system("color a");
    srand(time(0));
    string giocatore1, giocatore2, testacroce, giocare;
    int chilancia, lancio;
    cout << "Gioco di testa o croce";
    cout << "\n\nGiocatore 1, come ti chiami? ";
    getline(cin, giocatore1);
    cout << "\nGiocatore 2, come ti chiami? ";
    getline(cin, giocatore2);
    
    for ( ;; )
    
    {
        cout << "\n\nLancia la moneta " << giocatore1 << " (1) o " << giocatore2 << " (2)? ";
        cin >> chilancia;

        while (chilancia != 1 && chilancia != 2)
    
        {
            cerr << "\nInserire 1 o 2: ";
            cin >> chilancia;
        }

        if (chilancia == 1)
    
        {
            cout << "\n" << giocatore2 << ", testa o croce? ";
            cin >> testacroce;
            
			while (testacroce != "testa" && testacroce != "croce")
            
            {
                cerr << "\nScrivi \"testa\" o \"croce\": ";
                cin >> testacroce;
            }
            
            cout << "\n" << giocatore1 << " ha lanciato la moneta... ";
            lancio = rand() % 2 + 1;
        
            if (lancio == 1)
        
            {
                cout << "Testa!";
                
                if (testacroce == "testa")
                
                {
                    cout << "\n\nHa vinto " << giocatore2 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                        cout << "\n\n\n";
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }
                
                if (testacroce == "croce")
                
                {
                    cout << "\n\nNon ha vinto " << giocatore2 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                                
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }
                
            }
        
            else if (lancio == 2)
            
            {
                cout << "Croce!";
                
                if (testacroce == "testa")
                
                {
                    cout << "\n\nNon Ha vinto " << giocatore2 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                                
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }
                
                if (testacroce == "croce")
                
                {
                    cout << "\n\nHa vinto " << giocatore2 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                        cout << "\n\n";
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }           
                            
            }
            
        }
        
        else if (chilancia == 2)
    
        {
            cout << "\n" << giocatore1 << ", testa o croce? ";
            cin >> testacroce;
            
            while (testacroce != "testa" && testacroce != "croce")
            
            {
                cerr << "\nScrivi \"testa\" o \"croce\": ";
                cin >> testacroce;
            }
            
            cout << "\n" << giocatore2 << " ha lanciato la moneta... ";
            lancio = rand() % 2 + 1;
        
            if (lancio == 1)
        
            {
                cout << "Testa!";
                
                if (testacroce == "testa")
                
                {
                    cout << "\n\nHa vinto " << giocatore1 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                	    cout << "\n\n";
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }
                
                if (testacroce == "croce")
                
                {
                    cout << "\n\nNon ha vinto " << giocatore2 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                                
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }
                
            }
        
            else if (lancio == 2)
            
            {
                cout << "Croce!";
                
                if (testacroce == "testa")
                
                {
                    cout << "\n\nNon Ha vinto " << giocatore1 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                                 
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }
                
                if (testacroce == "croce")
                
                {
                    cout << "\n\nHa vinto " << giocatore1 << "!";
                    cout << "\n\nVuoi giocare ancora? ";
                    cin >> giocare;
                    
                    if (giocare == "si")
                    
                    {
                                
                    }
                    
                    else if (giocare == "no")
                    
                    {
                        break;
                    }
                    
                }           
                            
            }
            
        }
             
    }
    
    cout << "\n\nPremi Invio per uscire";    
	cin.ignore();
    return EXIT_SUCCESS;
}
