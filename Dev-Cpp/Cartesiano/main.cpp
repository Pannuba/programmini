#include <cstdlib>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
    
    system("color a");
    int scelta, impoesp;
    float xa, xb, ya, yb, distanza, xm, ym, m, m1, q, q1, a, a1, b, b1, c, c1, distpretta;
    cout << "PannProgrammaCheLavoraSuPuntiERetteNelPianoCartesiano";
    
    for ( ;; )
    
    {
    
        cout << "\n\nSi lavora su due punti (1), punto e retta (2), una retta (3) o due rette (4)? ";
        cin >> scelta;
        
        if (scelta == 1)
        
        {
            cout << "\n\nxa = ";
            cin >> xa;
            cout << "\nya = ";
            cin >> ya;
            cout << "\nxb = ";
            cin >> xb;
            cout << "\nyb = ";
            cin >> yb;
            distanza = sqrt(((xa - xb) * (xa - xb)) + ((ya - yb) * (ya - yb)));
            cout << "\n\nLa distanza tra i due punti e' pari a " << distanza;
            xm = (xa + xb) / 2;
            ym = (ya + yb) / 2;
            cout << "\n\nLe coordinate del punto medio sono ( " << xm << ", " << ym << " )";
            
            if ((xb - xa) == 0)
            
            {
                cout << "\n\nIl coefficiente angolare è uguale a 0, quindi la retta è parallela all'asse x";
            }
            
            else
            
            {
                m = (yb - ya) / (xb - xa);
                cout << "\n\nIl coefficiente angolare è pari a " << m;
                q = (-m*xa) + ya;
    
                if (q > 0)
    
                {
                    cout << "\n\nL'equazione esplicita della retta e': y = " << m << "x + " << q;
                
                    if (m > 0)
                
                    {
                        m = m * -1;
                        q = q * -1;
                        cout << "\nL'equazione implicita della retta e': " << m << "x - y + " << q << " = 0";
                    }
                
                    else
                
                    {
                        cout << "\nL'equazione implicita della retta e': " << m << "x + y - " << q << " = 0";
                    }
                
                }
    
                if (q < 0)
    
                {
                    cout << "\n\nL'equazione esplicita della retta e': y = " << m << "x - " << q;
                
                    if (m > 0)
                
                    {
                        m = m * -1;
                        q = q * -1;
                        cout << "\nL'equazione implicita della retta e': " << m << "x - y - " << q << " = 0";
                    }
                
                    else
                
                    {
                        cout << "\nL'equazione implicita della retta e': " << m << "x + y + " << q << " = 0";
                    } 
            
                }
    
                else if (q == 0)
    
                {
                    cout << "\n\nL'equazione esplicita della retta e': y = " << m << "x";
                
                    if (m > 0)
                
                    {
                        m = m * -1;
                        cout << "\nL'equazione implicita della retta e': " << m << "x - y = 0";
                    }
                
                    else
                
                    {
                        cout << "\nL'equazione implicita della retta e': " << m << "x + y = 0";
                    }
                    
                }
                
            }
        
        }
        
        if (scelta == 2)
        
        {
            cout << "\n\nPunto:\n\n xa = ";
            cin >> xa;
            cout << "\nya = ";
            cin >> ya;
            cout << "\nRetta: ax + by + c = 0 (1) o y = mx + q (2)? ";
            cin >> impoesp;
            
            if (impoesp == 1)
            
            {
                cout << "\na = ";
                cin >> a;
                cout << "\nb = ";
                cin >> b;
                cout << "\n c = ";
                cin >> c;
                distpretta = fabs(a*xa + b*ya + c) / sqrt(a*a + b*b);
            }
            
            else if (impoesp == 2)
            
            {
                cout << "\nm = ";
                cin >> m;
                cout << "\nq = ";
                cin >> q;
                distpretta = fabs(ya - m*xa -q) / sqrt(m*m + 1);
            }
            
            cout << "\nLa distanza del punto dalla retta è pari a " << distpretta;
        }
        
        if (scelta == 3)
        
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
            
        else if (scelta == 4)
        
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
        
    }
    
    cin.ignore();
    cin.get();
    return EXIT_SUCCESS;
}
