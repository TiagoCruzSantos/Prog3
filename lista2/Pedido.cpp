#include "Pedido.h"

Pedido::Pedido(){

}

Pedido::~Pedido(){
    
}

float Pedido::getValorTotal(){
    return this->valorTotal;
}
tm Pedido::getData(){
    return this->data;
}
string Pedido::status(){
    return this->status;
}
string Pedido::formaPgto(){
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

