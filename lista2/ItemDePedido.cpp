#include "ItemDePedido.h"

ItemDePedido::ItemDePedido(){
        
}
ItemDePedido::~ItemDePedido(){

}

int ItemDePedido::getQuantidade(){
    return this->quantidade;
}
float ItemDePedido::getPrecoVenda(){
    return this->precoVenda;
}

void ItemDePedido::setQuantidade(int qtd);
void ItemDePedido::setPrecoVenda(float preco);

