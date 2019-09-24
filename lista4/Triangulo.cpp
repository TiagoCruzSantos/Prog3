#include "Triangulo.h"

double Triangulo::getBase(){
    return this->base;
}

double Triangulo::getAltura(){
    return this->altura;
}

void Triangulo::setBase(double base){
    this->base = base;
}

void Triangulo::setAltura(double altura){
    this->altura = altura;
}

Triangulo::Triangulo(double base, double altura){
    this->base = base;
    this->altura = altura;
}

double Triangulo::calcularArea(){
    return (this->base*this->altura)/2;
}

void Triangulo::imprimirDados(){
    cout << "--TRIANGULO--" << endl << "BASE DO TRIANGULO: " << this->base << endl << "ALTURA DO TRIANGULO: " << this->altura << endl << "AREA DO TRIANGULO: " << this->calcularArea() << endl;
}
