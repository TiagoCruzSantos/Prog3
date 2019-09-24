#ifndef _TRIANGULO_
#define _TRIANGULO_
#include "Forma2d.h"

using namespace std;

class Triangulo: public Forma2d{
    private:
        double base;
        double altura;
    public:
        double getBase();
        double getAltura();
        void setBase(double base);
        void setAltura(double altura);
        Triangulo(double base, double altura);
        double calcularArea();
        void imprimirDados();
};

#endif