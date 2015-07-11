#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include "area.h"
using namespace std;

int main(){
    
    float base, altezza, raggio, area;
    system("color a");
    string figura;
    cout << "che figura? ";
    cin >> figura;
    
    if (figura == "rettangolo")
    
    {
        cout << "lato1: ";
        cin >> base;
        cout << "lato2: ";
        cin >> altezza;
        area = areaRettangolo(base, altezza);
        cout << "area: " << area;
    }
    
    if (figura == "quadrato")
    
    {
        cout << "lato: ";
        cin >> base;
        area = areaQuadrato(base);
        cout << "area: " << area;
    }
    
    if (figura == "cerchio")
    
    {
        cout << "raggio: ";
        cin >> raggio;
        area = areaCerchio(raggio);
        cout << "area: " << area;
    }
    
    cout << "\n\nPremi Invio per uscire: ";
    cin.ignore();
    cin.get();
    return EXIT_SUCCESS;
}
