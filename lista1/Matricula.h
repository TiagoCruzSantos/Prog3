#ifndef __MATRICULA__
#define __MATRICULA__

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Matricula{
    private:
        int codigo;
        tm diaMatricula;
        int nota;
        string situacao;
    public:
        Matricula();
        ~Matricula();
}


#endif
