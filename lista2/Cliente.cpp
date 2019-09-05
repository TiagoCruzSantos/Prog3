#include "Cliente.h"

Cliente::Cliente(){
    cout << "Cliente criado" << endl;
    this->pedidos = new vector<Pedido*>;
}
Cliente::~Cliente(){
    cout << "Cliente deletado" << endl;
    int tam = this->pedidos->size();
    for(int i = 0; i < tam; i++){
        delete this->pedidos->at(i);
    }
    delete this->pedidos;
}
        
string Cliente::getNome(){
    return this->nome;
}
tm Cliente::getDataNascimento(){
    return this->dataNascimento;
}
string Cliente::getRG(){
    return this->RG;
}
string Cliente::getCPF(){
    return this->CPF;
}
string Cliente::getEndereco(){
    return this->endereco;
}
string Cliente::getTelefone(){
    return this->telefone;
}
string Cliente::getEmail(){
    return this->email;
}

void Cliente::setNome(string nome){
    this->nome = nome;
}
void Cliente::setDataNascimento(tm data){
    this->dataNascimento = data;
}
void Cliente::setRG(string rg){
    this->RG = rg;
}
void Cliente::setCPF(string cpf){
    this->CPF = cpf;
}
void Cliente::setEndereco(string end){
    this->endereco = end;
}
void Cliente::setTelefone(string tel){
    this->telefone = tel;
}
void Cliente::setEmail(string email){
    this->email = email;
}

void Cliente::adicionarPedido(Pedido *ped){
    this->pedidos->push_back(ped);
}
vector<Pedido*> * Cliente::getPedidos(){
    return this->pedidos;
}
