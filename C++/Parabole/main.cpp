#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	
	system("color a");   
	float a, b, c, delta, vx, vy;
	cout << "PannTrovaCoordinateVerticeParabole";
	cout << "\n\nInserisci i valori a, b, c dell'equazione y = ax2 + bx + c:";
	
	for ( ;; )
	
	{
		cout << "\n\na = ";  
		cin >> a;
		
		while (a == 0)
	
		{
			cerr << "\nPer essere una parabola, a non dev'essere uguale a 0\n\na = ";
			cin >> a;
		}
		
		cout << "\nb = ";
		cin >> b;
		cout << "\nc = ";
		cin >> c;
		delta = (b*b) - (4 * a*c); /* No pow(b, 2) ma b * b perche pow converte la variabile in double */
		vx = -b / (2 * a);
		vy = -delta / (4 * a);
		
		if (b == 0)
			cout << "\n\nb e' uguale a 0, quindi la parabola non interseca l'asse x";
        
		if (c == 0)
			cout << "\n\nc e' uguale a 0, quindi la parabola passa per l'origine del piano";
		
		else if (b == 0 && c == 0)
			cout << "\n\nb e c sono uguali a 0, quindi il vertice della parabola coincide con l'origine del piano";
		
		cout << "\n\nVx = " << vx << "    Vy = " << vy << "\n\nV (" << vx << "; " << vy << ")\n\n";  
	}
	
	cout << "\n\nPremi Invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}
