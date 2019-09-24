#include "Cilindro.h"

double Cilindro::getRaio(){
    return this->raio;
}

double Cilindro::getAltura(){
    return this->altura;
}

void Cilindro::setRaio(double raio){
    this->raio = raio;
}

void Cilindro::setAltura(double altura){
    this->altura = altura;
}

Cilindro::Cilindro(double raio, double altura){
    this->raio = raio;
    this->altura = altura;
}

double Cilindro::calcularArea(){
    return 2*(M_PI)*this->raio*(this->altura + this->raio);
}

void Cilindro::imprimirDados(){
    cout << "--CILINDRO--" << endl << "RAIO DO CILINDRO: " << this->raio << endl << "ALTURA DO CILINDRO: " << this->altura << endl << "AREA DA SUPERFICIE DO CILINDRO: " << this->calcularArea() << endl << "VOLUME DO CILINDRO: " << this->calcularVolume() << endl;
}

double Cilindro::calcularVolume(){
    return (M_PI)*(this->raio * this->raio)*(this->altura);
}
