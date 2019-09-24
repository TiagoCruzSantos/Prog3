#ifndef _CILINDRO_
#define _CILINDRO_
#include "Forma3d.h"
#include <cmath>

using namespace std;

class Cilindro: public Forma3d{
    private:
        double raio;
        double altura;
    public:
        double getRaio();
        double getAltura();
        void setRaio(double raio);
        void setAltura(double altura);
        Cilindro(double raio, double altura);
        double calcularArea();
        void imprimirDados();
        double calcularVolume();
};

#endif