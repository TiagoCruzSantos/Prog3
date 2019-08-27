#ifndef __PROFESSOR__
#define __PROFESSOR__
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

class Professor{
    private:
        tm dataAdimissao;
        tm dataDemissao;
        string CPF;
        string RG;
        string endereco;
        string telefone;
        string email;
        string nome;
    public:
        Professor();
        ~Professor();
        void setDem(tm dem);
        static int qtdProfessores;
        void setProfessor(tm adm, string cpf, string rg, string end, string tel, string email, string nome);
        string getProfessor();
};
#endif
