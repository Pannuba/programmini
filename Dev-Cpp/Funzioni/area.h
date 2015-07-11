#include <iostream>
#include <cstdlib>
#include <cmath>

float area;

float areaRettangolo(float x, float y)

{
    area = x * y; // Come faccio a dire: area =  quel valore che ho messo * quell'altro valore che ho messo, anziche area = x * y
    return area;
}

float areaQuadrato(float x)

{
    area = x * x;
    return area;
}

float areaCerchio(float x)

{
    area = x*x * 3.14;
    return area;
}
