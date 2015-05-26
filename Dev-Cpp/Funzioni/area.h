#include <iostream>
#include <cstdlib>
#include <cmath>

float x, y, area;

float areaRettangolo(float, float)   // Differenza tra void senza return e float con return??

{
    area = x * y; // Come faccio a dire: area =  quel valore che ho messo * quell'altro valore che ho messo, anziche area = x * y
    return area;
}

float areaQuadrato(float)   

{
    area = x * x;
    return area;
}

float areaCerchio(float)

{
    area = x*x * 3.14;
    return area;
}
