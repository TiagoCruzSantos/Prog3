#include <iostream>
#include <list>
#include "Circulo.h"
#include "Quadrado.h"
//#include "Triangulo.h"
//#include "Esfera.h"
//#include "Cubo.h"
//#include "Cilindro.h"

using namespace std;

int main(){
    Circulo *circ = new Circulo(3);
    circ->imprimirDados();
    Quadrado *quad = new Quadrado(5);
    quad->imprimirDados();
    delete circ;
}