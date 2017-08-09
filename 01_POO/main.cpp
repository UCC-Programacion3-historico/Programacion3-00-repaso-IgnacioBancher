#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <math.h>
using namespace std;

int main() {
    Cuadrado c;
    cout<<"Diagonal "<<c.getdiagonal()<<endl;

c.setAlto(20);
    c.setAncho(20);
    if(c.getDiagonal() ==sqrt((20*20)+(20*20))){

    }

    cout << "Ejercicio 00/01\n" << endl;
    return 0;
}