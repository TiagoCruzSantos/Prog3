#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Funcionario {
    private:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        string matricula;
    public:
        Funcionario();
        ~Funcionario();
        
        string getNome();
        tm getDataNascimento();
        string getRG();
        string getCPF();
        string getEndereco();
        string getTelefone();
        string getEmail();
        string getMatricula();

        void setNome(string nome);
        void setDataNascimento(tm data);
        void setRG(string rg);
        void setCPF(string cpf);
        void setEndereco(string end);
        void setTelefone(string tel);
        void setEmail(string email);
        void setMatricula(string matricula);
};

#endif
