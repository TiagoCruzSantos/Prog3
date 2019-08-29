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
        Turma *tur;
    public:
        void setMatriculaInstituicao(string mat);
        void setCodigo(int cod);
        void setCpf(string cpf);
        void setRg(string rg);
        void setEndereco(string end);
        void setTelefone(string tel);
        void setEmail(string email);
        void setNome(string nome);
        
        static int qtdAlunos;
        
        void matricular(Turma *t);
        
        Aluno(string nome, int codigo, string rg, string cpf, string endereco, string telefone, string email);
        ~Aluno();
        string getCPF();
        int getCodigo();
        string getRG();
        string getEndereco();
        string getTelefone();
        string getEmail();
        string getNome();
};

#endif
