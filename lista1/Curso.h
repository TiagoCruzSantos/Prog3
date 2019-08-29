#ifndef __CURSO__
#define __CURSO__

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Curso{
    private:
        int codigo;
        string nome;
    public:
        Curso();
        ~Curso();
        int getCodigo();
        string getNome();
};

#endif
