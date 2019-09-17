#ifndef _PESSOA_
#define _PESSOA_
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pessoa{
    private:
        string nome;
        tm dataNascimento;
        string cpf;
        string rg;
    public:
        Pessoa(string nome, string rg, string cpf, tm data);
        string getNome();
        void setNome(string nome);
        tm getDataNascimento();
        void setDataNascimento(tm dataNascimento);
        string getCpf();
        void setCpf(string cpf);
        string getRg();
        void setRg(string rg);
};

#endif
