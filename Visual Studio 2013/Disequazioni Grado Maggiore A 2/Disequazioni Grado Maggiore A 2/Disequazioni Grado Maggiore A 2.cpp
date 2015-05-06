#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main(){

	int segno;
	float a1, b1, c1, a2, b2, c2, delta1, delta2, xuno, xdue, xtre, xquattro;
	cout << "PannRisolutoreDiDisquazioniDiGradoMaggioreAlSecondo 0.0.1 beta";

	for (;;)

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

		while (segno < 1 && segno > 4)

		{
			cout << "Inserire un valore compreso tra 1 e 4: ";
			cin >> segno;
		}

		if (a1 == 0)

		{
			xuno = -c1 / b1;
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

		delta1 = (b1*b1) - (4 * a1*c1); /* No pow(b, 2) ma (b*b) perchè pow converte la variabile in double (risultati non approssimati) */

		if (delta1 < 0)

		{
			cout << "\n\nIl delta e' minore di 0, quindi non esistono soluzioni all'equazione";

			if (segno == 1)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno == 4)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}
		}

		if (delta1 == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xuno = (-b1 + sqrt(delta1)) / (2 * a1);
			cout << "x1 = x2 = " << xuno;

			if (segno == 1)

			{
				cout << "\n\nPer ogni x diverso da " << xuno << "    S = R - {" << xuno << "}\n\n";
			}

			if (segno == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno == 4)

			{
				cout << "\n\nx = " << xuno << "    S = {" << xuno << "}\n\n";
			}

		}

		else if (delta1 > 0)

		{
			xuno = (-b1 - sqrt(delta1)) / (2 * a1); /* xuno è quello piccolo, xdue quello grande per una regola informale della matematica */
			xdue = (-b1 + sqrt(delta1)) / (2 * a1);
			cout << "\n\nx1 = " << xuno << "    x2 = " << xdue;

			if (segno == 1)

			{
				cout << "\n\nx < " << xuno << " v x > " << xdue << "    S = ] -infinito , " << xuno << " [ U ] " << xdue << " , +infinito [\n\n";
			}

			if (segno == 2)

			{
				cout << "\n\n" << xuno << " < x < " << xdue << "    S = ] " << xuno << " , " << xdue << " [\n\n";
			}

			if (segno == 3)

			{
				cout << "\n\nx <= " << xuno << " v x >= " << xdue << "    S = ] -infinito , " << xuno << " ] U [ " << xdue << " , +infinito [\n\n";
			}

			if (segno == 4)

			{
				cout << "\n\n" << xuno << " <= x <= " << xdue << "    S = [ " << xuno << " , " << xdue << " ]\n\n";
			}

		}

		if (a2 == 0)              /* Qui comincia la seconda equazione */

		{
			xtre = -c2 / b2;
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

		delta2 = (b2*b2) - (4 * a2*c2); /* No pow(b, 2) ma (b*b) perchè pow converte la variabile in double (risultati non approssimati) */

		if (delta2 < 0)

		{
			cout << "\n\nIl delta e' minore di 0, quindi non esistono soluzioni all'equazione";

			if (segno == 1)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno == 4)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}
		}

		if (delta2 == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xtre = (-b2 + sqrt(delta2)) / (2 * a2);
			cout << "x1 = x2 = " << xuno;

			if (segno == 1)

			{
				cout << "\n\nPer ogni x diverso da " << xtre << "    S = R - {" << xtre << "}\n\n";
			}

			if (segno == 2)

			{
				cout << "\n\nNon esiste x appartenente a R    S = vuoto\n\n";
			}

			if (segno == 3)

			{
				cout << "\n\nPer ogni x appartenente a R    S = R\n\n";
			}

			if (segno == 4)

			{
				cout << "\n\nx = " << xtre << "    S = {" << xtre << "}\n\n";
			}

		}

		else if (delta2 > 0)

		{
			xtre = (-b2 - sqrt(delta2)) / (2 * a2); /* xuno è quello piccolo, xdue quello grande per una regola informale della matematica */
			xquattro = (-b2 + sqrt(delta2)) / (2 * a2);
			cout << "\n\nx1 = " << xtre << "    x2 = " << xquattro;

			if (segno == 1)

			{
				cout << "\n\nx < " << xtre << " v x > " << xquattro << "    S = ] -infinito , " << xtre << " [ U ] " << xquattro << " , +infinito [\n\n";
			}

			if (segno == 2)

			{
				cout << "\n\n" << xtre << " < x < " << xquattro << "    S = ] " << xtre << " , " << xquattro << " [\n\n";
			}

			if (segno == 3)

			{
				cout << "\n\nx <= " << xtre << " v x >= " << xquattro << "    S = ] -infinito , " << xtre << " ] U [ " << xquattro << " , +infinito [\n\n";
			}

			if (segno == 4)

			{
				cout << "\n\n" << xtre << " <= x <= " << xquattro << "    S = [ " << xtre << " , " << xquattro << " ]\n\n";
			}

		}

	aunozero:
	aduezero :

		if (a1 == 0 && a2 != 0)

		{


		}

			 if (a1 != 0 && a2 == 0)

			 {
				 cout << "






			 }

			 else if (a1 != 0 && a2 != 0)

			 {
				 cout << "





			 }



	}

	cout << "\n\nPremi un qualsiasi tasto per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}

