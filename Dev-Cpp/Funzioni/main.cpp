#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include "area.h"
using namespace std;

int main(){
    
    system("color a");
    string figura;
    cout << "che figura? ";
    cin >> figura;
    
    if (figura == "rettangolo")
    
    {
        cout << "lato1: ";
        cin >> x;
        cout << "lato2: ";
        cin >> y;
        areaRettangolo(x, y);
        cout << "area: " << area;
    }
    
    if (figura == "quadrato")
    
    {
        cout << "lato: ";
        cin >> x;
        areaQuadrato(x);
        cout << "area: " << area;
    }
    
    if (figura == "cerchio")
    
    {
        cout << "raggio: ";
        cin >> x;
        areaCerchio(x);
        cout << "area: " << area;
    }
    
    cout << "\n\nPremi Invio per uscire: ";
    cin.ignore();
    return EXIT_SUCCESS;
}
