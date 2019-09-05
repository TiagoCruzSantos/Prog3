#ifndef _CLIENTE_
#define _CLIENTE_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Pedido.h"

using namespace std;

class Cliente {
    private:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        vector<Pedido*> * pedidos;
    public:
        Cliente();
        ~Cliente();

        string getNome();
        tm getDataNascimento();
        string getRG();
        string getCPF();
        string getEndereco();
        string getTelefone();
        string getEmail();

        void setNome(string nome);
        void setDataNascimento(tm data);
        void setRG(string rg);
        void setCPF(string cpf);
        void setEndereco(string end);
        void setTelefone(string tel);
        void setEmail(string email);

        void adicionarPedido(Pedido *ped);
        vector<Pedido*> * getPedidos();
};


#endif
