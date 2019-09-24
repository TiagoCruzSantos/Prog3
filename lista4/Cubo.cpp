#include "Cubo.h"

double Cubo::getLado(){
    return this->lado;
}

void Cubo::setLado(double lado){
    this->lado = lado;
}

Cubo::Cubo(double lado){
    this->lado = lado;
}

double Cubo::calcularArea(){
    return 6*(this->lado * this->lado);
}

double Cubo::calcularVolume(){
    return (this->lado * this->lado * this->lado);
}

void Cubo::imprimirDados(){
    cout << "LADO DO CUBO: " << this->lado << endl << "AREA DA SUPERFICIE DO CUBO: " << this->calcularArea() << endl << "VOLUME DO CUBO: " << this->calcularVolume() << endl;
}