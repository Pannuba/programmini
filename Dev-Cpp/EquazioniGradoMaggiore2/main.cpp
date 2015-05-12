#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>

using namespace std;
int main(){

    system("color a");
	int segno;
	float a1, b1, c1, a2, b2, c2, delta1, delta2, xuno, xdue, xtre, xquattro;
	cout << "PannRisolutoreDiDisquazioniDiGradoMaggioreAlSecondo";

	for ( ;; )
	
	{
        inizio:
        
       	cout << "\n\nInserisci i valori a, b, c della prima equazione:";
        cout << "\n\na = ";
		cin >> a1;
		cout << "\nb = ";
		cin >> b1;
		cout << "\nc = ";
		cin >> c1;
		cout << "\n\nInserisci i valori a, b, c della seconda equazione:";
        cout << "\n\na = ";
		cin >> a2;
		cout << "\nb = ";
		cin >> b2;
		cout << "\nc = ";
		cin >> c2;
		
		while (a1 == 0 && a2 == 0)
		
		{
            cout << "\n\nCi dev'essere almeno un'equazione di secondo grado";
            goto inizio;
        }
		
        cout << "\nMaggiore (1), minore (2), maggioreuguale (3) o minoreuguale (4) a 0? ";
		cin >> segno;

		while (segno < 1 || segno > 4)

		{
			cout << "\nInserire un valore compreso tra 1 e 4: ";
			cin >> segno;
		}
		
        cout << "\n\nEquazione 1:";
		
		if (a1 == 0)
		
		{
            xuno = -c1 / b1;
            cout << "\n\nx1 = " << xuno;
            goto aunozero;
        }
              		
        if (a1 < 0)

		{
		    a1 = a1 * (-1);
	        b1 = b1 * (-1);
			c1 = c1 * (-1);

			if (segno == 1)

			{
				segno = 2;
			}

			else if (segno == 2)

			{
				segno = 1;
			}

			if (segno == 3)

			{
			    segno = 4;
			}

			else if (segno == 4)

			{
				segno = 3;
			}
			
		}

		delta1 = (b1*b1) - (4 * a1*c1); /* No pow(b, 2) ma (b*b) perche' pow converte la variabile in double (risultati non approssimati) */

		if (delta1 < 0)

		{
			cout << "\n\nIl delta e' minore di 0, quindi non esistono soluzioni all'equazione";
		}

		if (delta1 == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xuno = (-b1 + sqrt(delta1)) / (2 * a1);
			cout << "x1 = x2 = " << xuno;
		}

		else if (delta1 > 0)

		{
			xuno = (-b1 - sqrt(delta1)) / (2 * a1); /* xuno e' quello piccolo, xdue quello grande per una regola informale della matematica */
			xdue = (-b1 + sqrt(delta1)) / (2 * a1);
			cout << "\n\nx1 = " << xuno << "    x2 = " << xdue;
		}
		
		aunozero:
		
		cout << "\n\nEquazione 2:";
		
		if (a2 == 0)              /* Qui comincia la seconda equazione */
		
		{
            xtre = -c2 / b2;
            cout << "\n\nx3 = " << xtre;
            goto aduezero;
        }
		
        if (a2 < 0)

		{
			a2 = a2 * (-1);
	        b2 = b2 * (-1);
			c2 = c2 * (-1);

			if (segno == 1)

			{
				segno = 2;
			}

			else if (segno == 2)

			{
				segno = 1;
			}

			if (segno == 3)

			{
			    segno = 4;
			}

			else if (segno == 4)

			{
				segno = 3;
			}
			
		}

		delta2 = (b2*b2) - (4 * a2*c2); /* No pow(b, 2) ma (b*b) perche' pow converte la variabile in double (risultati non approssimati) */

		if (delta2 < 0)

		{
			cout << "\n\nIl delta e' minore di 0, quindi non esistono soluzioni all'equazione";
		}

		if (delta2 == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xtre = (-b2 + sqrt(delta2)) / (2 * a2);
			cout << "x3 = x4 = " << xtre;
		}

		else if (delta2 > 0)

		{
			xtre = (-b2 - sqrt(delta2)) / (2 * a2); /* xuno e' quello piccolo, xdue quello grande per una regola informale della matematica */
			xquattro = (-b2 + sqrt(delta2)) / (2 * a2);
			cout << "\n\nx3 = " << xtre << "    x4 = " << xquattro;
        }
		
		aduezero:
                 
                 
        /* ora viene il bello*/
        
    
        if ((delta1 < 0 && delta2 < 0) || (a1 == 0 && delta2 < 0) || (a2 == 0 && delta1 < 0))  //sbagliato, ho fatto casino, da correggere
            
        {
            cout << "\n\nNon esistono soluzioni"; //aggiungere i casi dei segni                
        }
        
        if ((delta1 == 0 && delta2 == 0) || (a1 == 0 && delta2 == 0) || (a2 == 0 && delta1 == 0))
            
        {
            if (xuno > xtre)
            
            {
                swap(xuno, xtre);
            }
                
        }
        
        if (a1 == 0 || delta2 == 0)
        
        {
            float hold; ///////////////////////////////////////////////////////aggiungere float hold e int i 0 all inizio
            float array[3] = {xuno, xtre, xquattro};
	        	
            for (int i = 0; i < 2; i++)

            {
	    
                for (int j = 0; j < 2; j++)
	
                {
	
                    if (array[j] > array[j + 1])
            
                    {
                        hold = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = hold;
                    }
                    
                }
	
            }
	
            for (int i = 0; i < 3; i++)
	
            {
                cout << array[i] << endl;
            }
                
        }
        
        if (a2 == 0 || delta1 == 0)
        
        {
            float hold;
            float array[3] = {xuno, xdue, xtre};
	        	
            for (int i = 0; i < 2; i++)

            {
	    
                for (int j = 0; j < 2; j++)
	
                {
	
                    if (array[j] > array[j + 1])
            
                    {
                        hold = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = hold;
                    }
                    
                }
	
            }
	
            for (int i = 0; i < 3; i++)
	
            {
                cout << array[i] << endl;
            }
                
        }
        
        else
    
        {          
            float hold;
            float array[4] = {xuno, xdue, xtre, xquattro};
	        	
            for (int i = 0; i < 3; i++)

            {
	    
                for (int j = 0; j < 3; j++)
	
                {
	
                    if (array[j] > array[j + 1])
            
                    {
                        hold = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = hold;
                    }
                    
                }
                
            }

            for (int i = 0; i < 4; i++)
	
            {
                cout << array[i] << endl;
            }
        
        }
	
    } //fine di tutto il programma
	
    cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
