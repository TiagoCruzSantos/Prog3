#ifndef _ESFERA_
#define _ESFERA_
#include "Forma3d.h"
#include <cmath>

using namespace std;

class Esfera: public Forma3d{
    private:
        double raio;
    public:
        double getRaio();
        void setRaio(double raio);
        Esfera(double raio);
        double calcularArea();
        void imprimirDados();
        double calcularVolume();
};

#endif