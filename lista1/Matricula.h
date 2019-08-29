#ifndef __MATRICULA__
#define __MATRICULA__

#include <iostream>
#include <string>
#include <ctime>
#include "Turma.h"

using namespace std;

class Matricula{
    private:
        int codigo;
        tm diaMatricula;
        int nota;
        string situacao;
        Turma *tur;
    public:
        Matricula(Turma *tur);
        ~Matricula();
        
};


#endif
