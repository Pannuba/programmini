#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int segno;
	float a, b, c, delta, xuno, xdue;
	cout << "PannRisolutoreDiDisquazioniDiSecondoGrado 0.0.1 beta";
	cout << "\n\nInserisci i valori a, b, c dell'equazione ax2 + bx + c :";

	for (;;)

	{
		cout << "\n\na = ";
		cin >> a;

		while (a == 0)

		{
			cout << "\nPer essere una disequazione di secondo grado, a non dev'essere uguale a 0\n\na = ";
			cin >> a;
		}

		cout << "\nb = ";
		cin >> b;
		cout << "\nc = ";
		cin >> c;
		cout << "\nMaggiore (1), minore (2), maggioreuguale (3) o minoreuguale (4) a 0? ";
		cin >> segno;

		while (segno < 1, segno > 4)

		{
			cout << "Inserire un valore compreso tra 1 e 4: ";
			cin >> segno;
		}

		if (a < 0)

		{
			a = a * (-1);
			b = b * (-1);
			c = c * (-1);

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

		delta = (b*b) - (4 * a*c); /* No pow(b, 2) ma (b*b) perchè pow converte la variabile in double (risultati non approssimati) */

		if (delta < 0)

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

		if (delta == 0)

		{
			cout << "\n\nIl delta e' uguale a 0, quindi le due soluzioni coincidono\n\n";
			xuno = (-b + sqrt(delta)) / (2 * a);
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

		else if (delta > 0)

		{
			xuno = (-b - sqrt(delta)) / (2 * a); /* xuno è quello piccolo, xdue quello grande per una regola informale della matematica */
			xdue = (-b + sqrt(delta)) / (2 * a);
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

	}

	cout << "\n\nPremi un qualsiasi tasto per uscire: ";
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}

