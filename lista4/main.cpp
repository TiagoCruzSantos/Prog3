#include <iostream>
#include <list>
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Esfera.h"
#include "Cubo.h"
#include "Cilindro.h"

using namespace std;

int main(){
    Circulo *circ = new Circulo(3);
    circ->imprimirDados();
    cout << endl;

    Quadrado *quad = new Quadrado(5);
    quad->imprimirDados();
    cout << endl;

    Triangulo *tri = new Triangulo(5, 5);
    tri->imprimirDados();
    cout << endl;

    Esfera *esf = new Esfera(3);
    esf->imprimirDados();
    cout << endl;

    Cubo *cub = new Cubo(5);
    cub->imprimirDados();
    cout << endl;

    Cilindro *cin = new Cilindro(5, 10);
    cin->imprimirDados();
    cout << endl;

    delete circ;
    delete quad;
    delete tri;
    delete esf;
    delete cub;
    delete cin;
}