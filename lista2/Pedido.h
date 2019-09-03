#ifndef _PEDIDO_
#define _PEDIDO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Pedido {
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
    public:
        static int qtdPedidos;

        Pedido();
        ~Pedido();

        float getValorTotal();
        tm getData();
        string status();
        string formaPgto();

        void setValorTotal(float valor);
        void setData(tm data);
        void setStatus(string status);
        void setFormaPgto(string pgto);
};


#endif
