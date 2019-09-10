#include "Pedido.h"

Pedido::Pedido(Funcionario * fun, ItemDePedido *ped){
    cout << "Pedido novo" << endl;
    Pedido::qtdPedidos++;
    this->funcionario = fun;
    this->itens = new vector<ItemDePedido*>;
    this->itens->push_back(ped);
}

Pedido::~Pedido(){
    cout << "Pedido entregue" << endl;
    Pedido::qtdPedidos--;
    int tam = this->itens->size();
    for(int i = 0; i < tam; i++){
        delete this->itens->at(i);
    }
    delete this->itens;
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


void Pedido::adicionarItens(ItemDePedido * ped){
    this->itens->push_back(ped);
}
vector<ItemDePedido*> * Pedido::getItensDePedido(){
    return this->itens;
}
Funcionario * Pedido::getFuncionario(){
    return this->funcionario;
}
