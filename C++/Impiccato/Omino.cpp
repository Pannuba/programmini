#include "Omino.h"
using namespace std;

void Omino::frame()

{
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "                        \n";
	cout << "------+----------------- ";
}

void Omino::frame1()

{
	cout << "      +                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame2()

{
	cout << "      +----------+      \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame3()

{
	cout << "      +----------+      \n";
	cout << "      |  /              \n";
	cout << "      | /               \n";
	cout << "      |/                \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame4()

{
	cout << "      +----------+      \n";
	cout << "      |  /       |      \n";
	cout << "      | /      (*v*)    \n";
	cout << "      |/                \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame5()

{
	cout << "      +----------+      \n";
	cout << "      |  /       |      \n";
	cout << "      | /      (*v*)    \n";
	cout << "      |/         |      \n";
	cout << "      |          |      \n";
	cout << "      |          |      \n";
	cout << "      |          |      \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame6()

{
	cout << "      +----------+      \n";
	cout << "      |  /       |      \n";
	cout << "      | /      (*v*)    \n";
	cout << "      |/         |      \n";
	cout << "      |         /|      \n";
	cout << "      |        / |      \n";
	cout << "      |          |      \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame7()

{
	cout << "      +----------+      \n";
	cout << "      |  /       |      \n";
	cout << "      | /      (*v*)    \n";
	cout << "      |/         |      \n";
	cout << "      |         /|\\     \n";
	cout << "      |        / | \\    \n";
	cout << "      |          |      \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame8()

{
	cout << "      +----------+      \n";
	cout << "      |  /       |      \n";
	cout << "      | /      (*v*)    \n";
	cout << "      |/         |      \n";
	cout << "      |         /|\\     \n";
	cout << "      |        / | \\    \n";
	cout << "      |          |      \n";
	cout << "      |         /       \n";
	cout << "      |        /        \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

void Omino::frame9()

{
	cout << "      +----------+      \n";
	cout << "      |  /       |      \n";
	cout << "      | /      (*v*)    \n";
	cout << "      |/         |      \n";
	cout << "      |         /|\\     \n";
	cout << "      |        / | \\    \n";
	cout << "      |          |      \n";
	cout << "      |         / \\     \n";
	cout << "      |        /   \\    \n";
	cout << "      |                 \n";
	cout << "------+----------------- ";
}

unsigned int Omino::sbagliato(unsigned int vite)

{
	cout << "\nSbagliato! Hai perso una vita :D\n\n";
	vite--;
		
	switch (vite)
	
	{
		case 9:
			Omino::frame();
			break;
			
		case 8:
			Omino::frame1();
			break;
			
		case 7:
			Omino::frame2();
			break;
			
		case 6:
			Omino::frame3();
			break;
			
		case 5:
			Omino::frame4();
			break;
			
		case 4:
			Omino::frame5();
			break;
			
		case 3:
			Omino::frame6();
			break;
			
		case 2:
			Omino::frame7();
			break;
				
		case 1:
			Omino::frame8();
			break;
			
		case 0:
			Omino::frame9();
			cout << "\n\nHai perso!\t\tvite: 0\n";
			break;
	}
	
	return vite;
}

void Omino::giocareAncora(unsigned int *vite, bool *gioca)

{
	cout << "\n\nVuoi giocare ancora? ";
	cin >> giocare;
	
	if (giocare == "no" || giocare == "No")
	
	{
		*vite = 0;		/* *vite, *gioca perch� se non metto '*' cambio il valore al puntatore, non alla variabile */
		*gioca = false;
	}
	
}
