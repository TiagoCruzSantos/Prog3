#ifndef _CUBO_
#define _CUBO_
#include "Forma3d.h"

using namespace std;

class Cubo: public Forma3d{
    private:
        double lado;
    public:
        double getLado();
        void setLado(double lado);
        Cubo(double lado);
        double calcularArea();
        void imprimirDados();
        double calcularVolume();
};

#endif