#ifndef __ALUNO__
#define __ALUNO__

#include <iostream>
#include <string>
#include <ctime>
#include "Turma.h"

using namespace std;

class Aluno{
    private:
        string matriculaInstituicao;
        int codigo;
        string CPF;
        string RG;
        string endereco;
        string telefone;
        string email;
        string nome;
    public:
        static int qtdAlunos;
        void matricular(Turma *t);
        Aluno();
        ~Aluno();
}

#endif
