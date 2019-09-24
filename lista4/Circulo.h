#ifndef _CIRCULO_
#define _CIRCULO_
#include "Forma2d.h"
#include <cmath>

using namespace std;

class Circulo: public Forma2d{
    private:
        double raio;
    public:
        double getRaio();
        void setRaio(double raio);
        Circulo(double raio);
        double calcularArea();
        void imprimirDados();
};

#endif