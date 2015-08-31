#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    
    system("color a");
    string scelta, impoesp;
    float xa, ya, m, m1, q, a, a1, b, b1, c, c1, distpretta;
    cout << "PannProgrammaCheLavoraSuRetteNelPianoCartesiano";
    
    for ( ;; )
    
    {
        cout << "\n\nSi lavora su una retta (1), due rette (2) o un punto e una retta (3)? ";
        cin >> scelta;
        
        while (scelta != "1" && scelta != "2" && scelta != "3")
        
        {
            cerr << "\nInserire 1, 2 o 3: ";
            cin >> scelta;
        }
        
        if (scelta == "1")
        
        {
            cout << "\nRetta ax + by + c = 0 (1) o y = mx + q (2)? ";
            cin >> impoesp;
            if (impoesp == "1")
            
            {
                cout << "\nInserire la rette di equazione ax + by + c = 0\n\na = ";
                cin >> a;
                cout << "\nb = ";
                cin >> b;
                cout << "\nc = ";
                cin >> c;
                m = -(a / b);
                q = -(c / b);
                cout << "\nm = " << m << "    q = " << q;
            }
            
            else if (impoesp == "2")
            
            {
                cout << "\nm = ";
                cin >> m;
                cout << "\nq = ";
                cin >> q;
                
                if (q > 0)
    
                {
                
                    if (m > 0)
                
                    {
                        m = m * -1;
                        q = q * -1;
                        cout << "\n\nimplicita: " << m << "x - y + " << q << " = 0";
                    }
                
                    else
                
                    {
                        cout << "\n\nimplicita: " << m << "x + y " << q << " = 0";
                    }
                
                }
    
                if (q < 0)
    
                {
                
                    if (m > 0)
                
                    {
                        m = m * -1;
                        q = q * -1;
                        cout << "\n\nimplicita: " << m << "x - y - " << q << " = 0";
                    }
                
                    else
                
                    {
                        cout << "\n\nimplicita: " << m << "x + y + " << q << " = 0";
                    } 
            
                }
    
                else if (q == 0)
    
                {
                
                    if (m > 0)
                
                    {
                        m = m * -1;
                        cout << "\n\nimplicita: " << m << "x - y = 0";
                    }
                
                    else
                
                    {
                        cout << "\n\nimplicita: " << m << "x + y = 0";
                    }
                    
                }
                
            }
            
        }
        
        if (scelta == "2")
        
        {
            cout << "\nInserire le rette di equazione ax + by + c = 0";
            cout << "\nPrima retta\n\na = ";
            cin >> a;
            cout << "\nb = ";
            cin >> b;
            cout << "\nc = ";
            cin >> c;
            cout << "\n\nSeconda retta\n\na = ";
            cin >> a1;
            cout << "\nb = ";
            cin >> b1;
            cout << "\nc = ";
            cin >> c1;
            m = -(a / b);
            m1 = -(a1 / b1);
            cout << "\nm1 = " << m;
            cout << "\n\nm2 = " << m1;
            
            if (m == m1)
            
            {
                cout << "\n\nLe rette sono parallele";
            }
        
            if (m*m1 == -1)
        
            {
                cout << "\n\nLe rette sono perpendicolari";
            }
        
            else
        
            {
                cout << "\n\nLe rette sono incidenti";
            }
            
        }
        
        else if (scelta == "3")
        
        {
            cout << "\n\nPunto:\n\n xa = ";
            cin >> xa;
            cout << "\nya = ";
            cin >> ya;            
            cout << "\nRetta: ax + by + c = 0 (1) o y = mx + q (2)? ";
            cin >> impoesp;
            
            if (impoesp == "1")
            
            {
                cout << "\na = ";
                cin >> a;
                cout << "\nb = ";
                cin >> b;
                cout << "\n c = ";
                cin >> c;
                distpretta = fabs(a*xa + b*ya + c) / sqrt(a*a + b*b);
            }
            
            else if (impoesp == "2")
            
            {
                cout << "\nm = ";
                cin >> m;
                cout << "\nq = ";
                cin >> q;
                distpretta = fabs(ya - m*xa -q) / sqrt(m*m + 1);
            }
            
            cout << "\ndistanza punto retta = " << distpretta;
        }
        
    }
    
    cout << "\n\nPremi Invio per uscire: ";
    cin.sync();
    cin.get();
    return EXIT_SUCCESS;
}
