#include "Circulo.h"

double Circulo::getRaio(){
    return this->raio;
}

void Circulo::setRaio(double raio){
    this->raio = raio;
}

Circulo::Circulo(double raio){
    this->raio = raio;
}

double Circulo::calcularArea(){
    return M_PI*(this->raio * this->raio);
}


void Circulo::imprimirDados(){
    cout << "RAIO DO CIRCULO: " << this->raio << endl << "AREA DO CIRCULO: " << this->calcularArea() << endl;
}