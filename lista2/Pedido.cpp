#include "Pedido.h"

Pedido::Pedido(){
    cout << "Pedido novo" << endl;
    Pedido::qtdPedidos++;
}

Pedido::~Pedido(){
    cout << "Pedido entregue" << endl;
    Pedido::qtdPedidos--;
}

float Pedido::getValorTotal(){
    return this->valorTotal;
}
tm Pedido::getData(){
    return this->data;
}
string Pedido::getStatus(){
    return this->status;
}
string Pedido::getFormaPgto(){
    return this->formaPgto;
}

void Pedido::setValorTotal(float valor){
    this->valorTotal = valor;
}
void Pedido::setData(tm data){
    this->data = data;
}
void Pedido::setStatus(string status){
    this->status = status;
}
void Pedido::setFormaPgto(string pgto){
    this->formaPgto = pgto;
}

