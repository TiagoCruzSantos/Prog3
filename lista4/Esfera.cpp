#include "Esfera.h"

double Esfera::getRaio(){
    return this->raio;
}

void Esfera::setRaio(double raio){
    this->raio = raio;
}

Esfera::Esfera(double raio){
    this->raio = raio;
}

double Esfera::calcularArea(){
    return 4*(M_PI)*(this->raio * this->raio);
}

double Esfera::calcularVolume(){
    return (4.0/3.0)*(M_PI)*(this->raio * this->raio * this->raio);
}

void Esfera::imprimirDados(){
    cout << "--ESFERA--" << endl << "RAIO DA ESFERA: " << this->raio << endl << "AREA DA SUPERFICIE DA ESFERA: " << this->calcularArea() << endl << "VOLUME DA ESFERA: " << this->calcularVolume() << endl;
}

