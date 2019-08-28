#ifndef __TURMA__
#define __TURMA__
#include <iostream>
#include <string>
#include <ctime>
#include "Professor.h"

using namespace std;

class Turma{
    private:
        int codigo;
        int vagas;
        int ano;
        int semestre;
        tm dtInicio;
        tm dtFim;
    public:
        static int qtdTurmas;
        Turma();
        ~Turma();
}


#endif
