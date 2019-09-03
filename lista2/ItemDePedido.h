#ifndef _ITEMDEPEDIDO_
#define _ITEMDEPEDIDO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class ItemDePedido{
    private:
        int quantitdade;
        float precoVenda;
    public:
       ItemDePedido();
       ~ItemDePedido();

       int getQuantidade();
       float getPrecoVenda();

       void setQuantidade(int qtd);
       void setPrecoVenda(float preco);
}

#endif
