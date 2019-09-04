#ifndef _ITEMDEPEDIDO_
#define _ITEMDEPEDIDO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#include "Produto.h"

using namespace std;

class ItemDePedido{
    private:
        int quantidade;
        float precoVenda;
        Produto * produto;
    public:
       ItemDePedido();
       ~ItemDePedido();

       int getQuantidade();
       float getPrecoVenda();

       void setQuantidade(int qtd);
       void setPrecoVenda(float preco);
};

#endif
