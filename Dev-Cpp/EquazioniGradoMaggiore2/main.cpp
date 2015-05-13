#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
#include <string>
using namespace std;

int main(){

    system("color a");
	int segno1, segno2, i = 0, j = 0;
	string segnotot, simboloprima1, simboloprima2, simboloprima3, simboloprima4, simboloprima5, simboloseconda1, simboloseconda2, simboloseconda3, simboloseconda4;
	float a1, b1, c1, a2, b2, c2, delta1, delta2, xuno, xdue, xtre, xquattro, hold;
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
		
        cout << "\nMaggiore ( > ), minore ( < ), maggioreuguale ( >= ) o minoreuguale ( <= ) a 0? "; // se non va lorimeto rpima ckn i numeri
		cin >> segnotot;

		while ((segnotot != ">") && (segnotot != "<") && (segnotot != ">=") && (segnotot != "<="))

		{
			cout << "\nInserire > , < , >= o <= : ";
			cin >> segnotot;
		}
		
		if (segnotot == ">" || segnotot == "<")
		
		{
            segno1 = 1;
            segno2 = 1;
        }
        
        else if (segnotot == ">=" || segnotot == "<=")
        
        {
            segno1 = 3;
            segno2 = 3;
        }
		
        cout << "\n\nEquazione 1:";
		
		if (a1 == 0)
		
		{
            xuno = -c1 / b1;
            cout << "\n\nx1 = " << xuno;
            
            if (segno1 == 1)
            
            {
                cout << "\n\nx1 > " << xuno;
            }
            
            if (segno1 == 2)
            
            {
                cout << "\n\nx1 < " << xuno;
            }
            
            if (segno1 == 3)
            
            {
                cout << "\n\nx1 >= " << xuno;
            }
            
            if (segno1 == 4)
            
            {
                cout << "\n\nx1 <= " << xuno;
            }
            
            goto aunozero;
        }
              		
        if (a1 < 0)

		{
		    a1 = a1 * (-1);
	        b1 = b1 * (-1);
			c1 = c1 * (-1);

			if (segnotot == ">")

			{
				segno1 = 2;
			}

			else if (segnotot == "<")

			{
				segno1 = 1;
			}

			if (segnotot == ">=")

			{
			    segno1 = 4;
			}

			else if (segnotot == "<=")

			{
				segno1 = 3;
			}
			
		}

		delta1 = (b1*b1) - (4 * a1*c1); /* No pow(b, 2) ma (b*b) perche' pow converte la variabile in double (risultati non approssimati) */

		if (delta1 < 0)

		{
			cout << "\n\nIl delta e' minore di 0, quindi non esistono soluzioni all'equazione";
			
			if (segno1 == 1)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno1 == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno1 == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno1 == 4)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}
		}

		if (delta1 == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xuno = (-b1 + sqrt(delta1)) / (2 * a1);
			cout << "x1 = x2 = " << xuno;
			
			if (segno1 == 1)

			{
				cout << "\n\nPer ogni x diverso da " << xuno << "    S = R - {" << xuno << "}\n\n";
			}

			if (segno1 == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno1 == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno1 == 4)

			{
				cout << "\n\nx = " << xuno << "    S = {" << xuno << "}\n\n";
			}
			
		}

		else if (delta1 > 0)

		{
			xuno = (-b1 - sqrt(delta1)) / (2 * a1); /* xuno e' quello piccolo, xdue quello grande per una regola informale della matematica */
			xdue = (-b1 + sqrt(delta1)) / (2 * a1);
			cout << "\n\nx1 = " << xuno << "    x2 = " << xdue;
			
			if (segno1 == 1)

			{
				cout << "\n\nx < " << xuno << " v x > " << xdue << "    S = ] -infinito , " << xuno << " [ U ] " << xdue << " , +infinito [\n\n";
			}

			if (segno1 == 2)

			{
				cout << "\n\n" << xuno << " < x < " << xdue << "    S = ] " << xuno << " , " << xdue << " [\n\n";
			}

			if (segno1 == 3)

			{
				cout << "\n\nx <= " << xuno << " v x >= " << xdue << "    S = ] -infinito , " << xuno << " ] U [ " << xdue << " , +infinito [\n\n";
			}

			if (segno1 == 4)

			{
				cout << "\n\n" << xuno << " <= x <= " << xdue << "    S = [ " << xuno << " , " << xdue << " ]\n\n";
			}
		}
		
		aunozero:
		
		cout << "\n\nEquazione 2:";
		
		if (a2 == 0)              /* Qui comincia la seconda equazione */
		
		{
            xtre = -c2 / b2;
            cout << "\n\nx3 = " << xtre;
            
            if (segno2 == 1)
            
            {
                cout << "\n\nx3 > " << xtre;
            }
            
            if (segno2 == 2)
            
            {
                cout << "\n\nx3 < " << xtre;
            }
            
            if (segno2 == 3)
            
            {
                cout << "\n\nx3 >= " << xtre;
            }
            
            if (segno2 == 4)
            
            {
                cout << "\n\nx3 <= " << xtre;
            }
            
            goto aduezero;
        }
		
        if (a2 < 0)

		{
			a2 = a2 * (-1);
	        b2 = b2 * (-1);
			c2 = c2 * (-1);

			if (segnotot == ">")

			{
				segno2 = 2;
			}

			else if (segnotot == "<")

			{
				segno2 = 1;
			}

			if (segnotot == ">=")

			{
			    segno2 = 4;
			}

			else if (segnotot == "<=")

			{
				segno2 = 3;
			}
			
		}

		delta2 = (b2*b2) - (4 * a2*c2); /* No pow(b, 2) ma (b*b) perche' pow converte la variabile in double (risultati non approssimati) */

		if (delta2 < 0) //eventualmente togliere i cout

		{
		    cout << "\n\nNon esistono soluzioni";
		    
			if (segno2 == 1)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno2 == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno2 == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno2 == 4)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}
			
		}

		if (delta2 == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xtre = (-b2 + sqrt(delta2)) / (2 * a2);
			cout << "x3 = x4 = " << xtre;
			
			if (segno2 == 1)

			{
				cout << "\n\nPer ogni x diverso da " << xuno << "    S = R - {" << xuno << "}\n\n";
			}

			if (segno2 == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno2 == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno2 == 4)

			{
				cout << "\n\nx = " << xuno << "    S = {" << xuno << "}\n\n";
			}
			
		}

		else if (delta2 > 0)

		{
			xtre = (-b2 - sqrt(delta2)) / (2 * a2); /* xuno e' quello piccolo, xdue quello grande per una regola informale della matematica */
			xquattro = (-b2 + sqrt(delta2)) / (2 * a2);
			cout << "\n\nx3 = " << xtre << "    x4 = " << xquattro;
			
			if (segno2 == 1)

			{
				cout << "\n\nx < " << xuno << " v x > " << xdue << "    S = ] -infinito , " << xuno << " [ U ] " << xdue << " , +infinito [\n\n";
			}

			if (segno2 == 2)

			{
				cout << "\n\n" << xuno << " < x < " << xdue << "    S = ] " << xuno << " , " << xdue << " [\n\n";
			}

			if (segno2 == 3)

			{
				cout << "\n\nx <= " << xuno << " v x >= " << xdue << "    S = ] -infinito , " << xuno << " ] U [ " << xdue << " , +infinito [\n\n";
			}

			if (segno2 == 4)

			{
				cout << "\n\n" << xuno << " <= x <= " << xdue << "    S = [ " << xuno << " , " << xdue << " ]\n\n";
			}
        }
		
		aduezero:
           
        if (segno1 == 1 || segno1 == 3)             //se non va faccio la cosa dei piu e meno int piu = "+"
        
        {
            simboloprima1 = "+";
            simboloprima2 = "-";
            simboloprima3 = "-";
            simboloprima4 = "+";
        }
        
        else if (segno1 == 2 || segno1 == 4)
        
        {
            simboloprima1 = "-";
            simboloprima2 = "+";
            simboloprima3 = "+";
            simboloprima4 = "-";
        }
     
        if (segno2 == 1 || segno2 == 3)
        
        {
            simboloseconda1 = "+";
            simboloseconda2 = "-";
            simboloseconda3 = "-";
            simboloseconda4 = "+";
        }
        
        if (segno2 == 2 || segno2 == 4)
        
        {
            simboloseconda1 = "-";
            simboloseconda2 = "+";
            simboloseconda3 = "+";
            simboloseconda4 = "-";
        }
    
        if (delta1 < 0 && delta2 < 0)
            
        {
            cout << "\n\nNon esistono soluzioni";
            
            if (segnotot == ">" || segnotot == ">=")
            
            {
                cout << "\n\nPer ogni x appartenente a R";
            }
            
            else if (segnotot == "<" || segnotot == "<=")
            
            {
                cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
            }
                            
        }
        
        if (a1 == 0 && delta2 < 0)
        
        {
            cout << "x " << segnotot << " " << xuno << "\n\n";
        }
        
        if (a2 == 0 && delta1 < 0)
        
        {
            cout << "x " << segnotot << " " << xtre << "\n\n";
        }
        
        if ((delta1 == 0 && delta2 == 0) || (a1 == 0 && delta2 == 0) || (a2 == 0 && delta1 == 0))
            
        {
            if (xuno > xtre)
            
            {
                swap(xuno, xtre); //no tabella
            }
                
        }
        
        if (a1 == 0 || delta2 == 0)
        
        {             //aggiungere float hold e int i 0 all inizio
            float array[3] = {xuno, xtre, xquattro};
	        	
            for (i; i < 2; i++)

            {
	    
                for (j; j < 2; j++)
	
                {
	
                    if (array[j] > array[j + 1])
            
                    {
                        hold = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = hold;
                    }
                    
                }
	
            }
	
            for (i; i < 3; i++)
	
            {
                cout << array[i] << endl;
            }
                
        }
        
        if (a2 == 0 || delta1 == 0)
        
        {
            float array[3] = {xuno, xdue, xtre};
	        	
            for (i; i < 2; i++)

            {
	    
                for (j; j < 2; j++)
	
                {
	
                    if (array[j] > array[j + 1])
            
                    {
                        hold = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = hold;
                    }
                    
                }
	
            }
	
            for (i; i < 3; i++)
	
            {
                cout << array[i] << endl;
            }
                
        }
        
        else
    
        {          
            float array[4] = {xuno, xdue, xtre, xquattro};
	        	
            for (i; i < 3; i++)

            {
	    
                for (j; j < 3; j++)
	
                {
	
                    if (array[j] > array[j + 1])
            
                    {
                        hold = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = hold;
                    }
                    
                }
                
                cout << "___" << xuno << "___" << xdue << "___" << xtre << "___" << xquattro << "___";
                
                
            }

            for (i; i < 4; i++)  //serben?
	
            {
                cout << array[i] << endl; //questo serben?
            }
        
        }
	
    } //fine di tutto il programma
	
    cout << "\n\nPremi un qualsiasi tasto per uscire: ";
    cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}
