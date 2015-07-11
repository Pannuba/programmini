#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
struct Persona
 
{
int ciao;
};
 
int main(){
 
	cout << "num tot persone? ";
int tot; string nome;
cin >> tot;
for (int i = 0; i < tot; i++)
{ cout << "inserisci nome persona " << i + 1 << " : ";
cin>>nome; Persona nome; cin>>nome.ciao; cout<<nome.ciao;}
 
	cout << "\n\nPremi Invio per uscire: ";
	cin.ignore();
	return EXIT_SUCCESS;
}
