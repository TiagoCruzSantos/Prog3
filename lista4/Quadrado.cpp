#include "Quadrado.h"

double Quadrado::getLado(){
    return this->lado;
}

void Quadrado::setQuadrado(float lado){
    this->lado = lado;
}

Quadrado::Quadrado(double lado){
    this->lado = lado;
}

double Quadrado::calcularArea(){
    return this->lado*this->lado;
}

void Quadrado::imprimirDados(){
    cout << "TAMANHO DO LADO: " << this->lado << endl << "AREA DO QUADRADO: " << this->calcularArea() << endl;
}
