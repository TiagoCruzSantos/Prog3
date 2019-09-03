#include "Cliente.h"

Cliente::Cliente(){
    
}
Cliente::~Cliente(){
    
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

