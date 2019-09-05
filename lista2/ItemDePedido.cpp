#include "ItemDePedido.h"

ItemDePedido::ItemDePedido(Produto *prod){
    this->produto = prod;        
}
ItemDePedido::~ItemDePedido(){
    delete this->produto;
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

Produto * ItemDePedido::getProduto(){
    return this->produto;
}
