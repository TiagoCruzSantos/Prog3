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
        time_t dtInicio;
        time_t dtFim;
        Professor *prof;
    public:
        static int qtdTurmas;
        Turma();
        ~Turma();
        void alocarProfessor(Professor *p);
};


#endif
