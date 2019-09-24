#ifndef _FORMA_
#define _FORMA_

#include <iostream>
#include <list>

using namespace std;

class Forma{
    public:
        virtual double calcularArea() = 0;
        virtual void imprimirDados() = 0;
};

#endif