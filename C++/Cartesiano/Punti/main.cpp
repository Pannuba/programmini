#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <conio.h>
using namespace std;

int main(){
    
    system("color a");
    float ax, bx, ay, by, distanza, mx, my, m, q;
    cout << "PannProgrammaCheLavoraSuPuntiNelPianoCartesiano";
    
    for ( ;; )
    
    {
        cout << "\n\nSi hanno le x e y di due punti (1), un punto e il punto medio (2), un punto (3)?";
        bool scelta = true;
        
        while (scelta == true)
        
        {        
	        switch (_getch())
	        
	        {
	        
	        	case '1':
	        		
		            cout << "\n\nAx = ";
		            cin >> ax;
					cout << "\nAy = ";
		            cin >> ay;
		            cout << "\nBx = ";
		            cin >> bx;
		            cout << "\nBy = ";
		            cin >> by;
		            distanza = sqrt((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by));
		            cout << "\n\ndistanza = " << distanza;
		            mx = (ax + bx) / 2;
		            my = (ay + by) / 2;
		            cout << "    M (" << mx << "; " << my << ")";
		            
		            if ((bx - ax) == 0)
		            
		            {
		                cout << "\n\nm = 0, quindi r parallela asse x";
		                scelta = false;
		                break;
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
		                    scelta = false;
							break;
		                    }
		                
		                    else
		                
		                    {
		                        cout << "\n\nimplicita: " << m << "x + y " << q << " = 0";
		                    	scelta = false;
								break;
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
		                        scelta = false;
								break;
		                    }
		                
		                    else
		                
		                    {
		                        cout << "\n\nimplicita: " << m << "x + y + " << q << " = 0";
		                        scelta = false;
								break;
		                    } 
		            
		                }
		    
		                else if (q == 0)
		    
		                {
		                    cout << "\n\nequazione esplicita: y = " << m << "x";
		                
		                    if (m > 0)
		                
		                    {
		                        m = m * -1;
		                        cout << "\n\nimplicita: " << m << "x - y = 0";
		                        scelta = false;
								break;
		                    }
		                
		                    else
		                
		                    {
		                        cout << "\n\nimplicita: " << m << "x + y = 0";
		                        scelta = false;
								break;
		                    }
		                    
		                }
		                
		            }
		        
		        case '2':
		        	
		            cout << "\n\nAx = ";
		            cin >> ax;
		            cout << "\nAy = ";
		            cin >> ay;
		            cout << "\nMx = ";
		            cin >> mx;
		            cout << "\nMy = ";
		            cin >> my;
		            bx = (2 * mx) - ax;
		            by = (2 * my) - ay;
		            cout << "\nM (" << bx << "; " << by << ")";
		            scelta = false;
					break;
		            
		        case '3':
		        	
		            cout << "\n\nAx = ";
		            cin >> ax;
		            cout << "\nAy = ";
		            cin >> ay;
		            
		            if (ax >= 0 && ay >= 0)
		            
		            {
		                cout << "\nfascio proprio: y - " << ay << " = m(x - " << ax << ")";
		                scelta = false;
						break;
		            }
		            
		            else if (ax < 0 && ay < 0)
		            
		            {
		                cout << "\nfascio proprio: y + " << ay << " = m(x + " << ax << ")";
		                scelta = false;
						break;
		            }
		            
		            if (ax >= 0 && ay < 0)
		            
		            {
		                cout << "\nfascio proprio: y + " << ay << " = m(x - " << ax << ")";
		                scelta = false;
						break;
		            }
		            
		            else if (ax < 0 && ay >= 0)
		            
		            {
		                cout << "\nfascio proprio: y - " << ay << " = m(x + " << ax << ")";
		                scelta = false;
						break;
		            }
		            
		        default:
					
					cout << "\nInserisci 1, 2 o 3: ";
					_getch();
		            
			}
		
		}
        
    }
    
    cout << "\n\nPremi Invio per uscire: ";
    cin.sync();
    cin.get();
    return EXIT_SUCCESS;
}
