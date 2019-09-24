#include <iostream>
#include <vector>
#include "Forma.h"
#include "Forma2d.h"
#include "Forma3d.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Esfera.h"
#include "Cubo.h"
#include "Cilindro.h"

using namespace std;

int main(){
    Circulo *circ = new Circulo(3);
    Quadrado *quad = new Quadrado(5);
    Triangulo *tri = new Triangulo(5, 5);
    Esfera *esf = new Esfera(3);
    Cubo *cub = new Cubo(5);
    Cilindro *cin = new Cilindro(5, 10);
    vector<Forma*> * listadeformas = new vector<Forma*>();

    listadeformas->push_back(circ);
    listadeformas->push_back(quad);
    listadeformas->push_back(tri);
    listadeformas->push_back(esf);
    listadeformas->push_back(cub);
    listadeformas->push_back(cin);
    
    for(int i = 0; i < listadeformas->size(); i++){
        listadeformas->at(i)->imprimirDados();
        cout << endl;
    }

    delete circ;
    delete quad;
    delete tri;
    delete esf;
    delete cub;
    delete cin;
    delete listadeformas;
}