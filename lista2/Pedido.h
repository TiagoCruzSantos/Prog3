#ifndef _PEDIDO_
#define _PEDIDO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Funcionario.h"
#include "ItemDePedido.h"

using namespace std;

class Pedido {
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        vector<ItemDePedido*> * itens;
        Funcionario * funcionario;
    public:
        static int qtdPedidos;

        Pedido();
        ~Pedido();

        float getValorTotal();
        tm getData();
        string getStatus();
        string getFormaPgto();

        void setValorTotal(float valor);
        void setData(tm data);
        void setStatus(string status);
        void setFormaPgto(string pgto);
};


#endif
