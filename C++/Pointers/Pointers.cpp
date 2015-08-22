#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int somma(int *latoa, int *latob)

{
    return latoa + latob; // o era *latoa + *latob?

int main(){

    cout << "Test sui puntatori\n\n";
    int latoa, latob;
    cin >> latoa; cin >> latob;
    cout << somma(&latoa, &latob);
    int c; int *c = &c;
    cin *c; cout << *c << " " << c;
    int od;
    *c = &od;
    /* ... */
    return EXIT_SUCCESS;
}
