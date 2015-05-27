#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    
    system("color a");
    string scelta;
    float ax, bx, ay, by, distanza, mx, my, m, m1, q, q1, fasciox, fascioy;
    cout << "PannProgrammaCheLavoraSuPuntiNelPianoCartesiano";
    
    for ( ;; )
    
    {
        cout << "\n\nSi hanno le x e y di due punti (1), un punto e il punto medio (2), un punto (3)?";
        cin >> scelta;
        
        while (scelta != "1" && scelta != "3" && scelta != "2")
        
        {
            cerr << "\nInserisci un numero: ";
            cin >> scelta;
        }
        
        if (scelta == "1")
        
        {
            cout << "\n\nAx = ";
            cin >> ax;
            
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> ax;
			}
            
			cout << "\nAy = ";
            cin >> ay;
            
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> ay;
			}
			
            cout << "\nBx = ";
            cin >> bx;
    		
			while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> bx;
			}
			
            cout << "\nBy = ";
            cin >> by;
    		
			while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> by;
			}
			
            distanza = sqrt((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by));
            cout << "\n\ndistanza = " << distanza;
            mx = (ax + bx) / 2;
            my = (ay + by) / 2;
            cout << "    M (" << mx << "; " << my << ")";
            
            if ((bx - ax) == 0)
            
            {
                cout << "\n\nm = 0, quindi r parallela asse x";
            }
            
            else
            
            {
                m = (by - ay) / (bx - ax);
                cout << "    m = " << m;
                q = (-m*ax) + ay;
    
                if (q > 0)
    
                {
                    cout << "\n\nequazione esplicita: y = " << m << "x + " << q;
                
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
                    cout << "\n\nequazione esplicita: y = " << m << "x - " << q;
                
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
                    cout << "\n\nequazione esplicita: y = " << m << "x";
                
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
            cout << "\n\nAx = ";
            cin >> ax;
                        
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> ax;
			}
            
            cout << "\nAy = ";
            cin >> ay;
                        
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> ay;
			}
            
            cout << "\nMx = ";
            cin >> mx;
                        
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> mx;
			}
            
            cout << "\nMy = ";
            cin >> my;
                        
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> my;
			}
            
            bx = (2 * mx) - ax;
            by = (2 * my) - ay;
            cout << "\nM (" << bx << "; " << by << ")";
            
        }
        
        if (scelta == "3")
        
        {
            cout << "\n\nAx = ";
            cin >> ax;
			           
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> ax;
			}
            
            cout << "\nAy = ";
            cin >> ay;
                        
            while (cin.fail() == true)
		
			{
    	        cin.clear();
    			cerr << "\nInserisci un numero: ";
    			cin.ignore();
    			cin >> ay;
			}
            
            if (ax >= 0 && ay >= 0)
            
            {
                cout << "\nfascio proprio: y - " << ay << " = m(x - " << ax << ")";
            }
            
            else if (ax < 0 && ay < 0)
            
            {
                cout << "\nfascio proprio: y + " << ay << " = m(x + " << ax << ")";
            }
            
            if (ax >= 0 && ay < 0)
            
            {
                cout << "\nfascio proprio: y + " << ay << " = m(x - " << ax << ")";
            }
            
            else if (ax < 0 && ay >= 0)
            
            {
                cout << "\nfascio proprio: y - " << ay << " = m(x + " << ax << ")";
            }
            
        }
        
    }
    
    cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
    cin.get();
    return EXIT_SUCCESS;
}
