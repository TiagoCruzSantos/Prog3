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

void ItemDePedido::setQuantidade(int qtd){
    this->quantidade = qtd;
}
void ItemDePedido::setPrecoVenda(float preco){
    this->precoVenda = preco;
}

