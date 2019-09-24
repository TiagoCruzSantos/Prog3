#ifndef _QUADRADO_
#define _QUADRADO_
#include "Forma2d.h"

using namespace std;

class Quadrado: public Forma2d{
    private:
        double lado;
    public:
        double getLado();
        void setQuadrado(float lado);
        Quadrado(double lado);
        double calcularArea();
        void imprimirDados();
};

#endif