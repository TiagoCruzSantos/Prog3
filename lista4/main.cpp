#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
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

Forma * criarForma(){
    int k = rand()%6;
    int n1 = rand()%100;
    int n2 = rand()%100;
    switch(k){
        case 0:
            return new Circulo(n1);
            break;
        case 1:
            return new Quadrado(n1);
            break;
        case 2:
            return new Triangulo(n1, n2);
            break;
        case 3:
            return new Esfera(n1);
            break;
        case 4:
            return new Cubo(n1);
            break;
        case 5:
            return new Cilindro(n1, n2);
            break;
        default:
            break;
    }
}

int main(){
    srand(time(0));
    vector<Forma*> * listadeformas = new vector<Forma*>();
    
    for(int i = 0; i < 100; i++){
        listadeformas->push_back(criarForma());
    }

    for(int i = 0; i < listadeformas->size(); i++){
        listadeformas->at(i)->imprimirDados();
        cout << endl;
    }

    for(int i = 0; i < listadeformas->size(); i++){
        delete listadeformas->at(i);
    }
    
    delete listadeformas;
}