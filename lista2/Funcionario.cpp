#include "Funcionario.h"

Funcionario::Funcionario(){
    
}
Funcionario::~Funcionario(){
    
}
        
string Funcionario::getNome(){
    return this->nome;
}
tm Funcionario::getDataNascimento(){
    return this->dataNascimento;
}
string Funcionario::getRG(){
    return this->RG;
}
string Funcionario::getCPF(){
    return this->CPF;
}
string Funcionario::getEndereco(){
    return this->endereco;
}
string Funcionario::getTelefone(){
    return this->telefone;
}
string Funcionario::getEmail(){
    return this->email;
}
string Funcionario::getMatricula(){
    return this->matricula;
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}
void Funcionario::setDataNascimento(tm data){
    this->dataNascimento = data;
}
void Funcionario::setRG(string rg){
    this->RG = rg;
}
void Funcionario::setCPF(string cpf){
    this->CPF = cpf;
}
void Funcionario::setEndereco(string end){
    this->endereco = end;
}
void Funcionario::setTelefone(string tel){
    this->telefone = tel;
}
void Funcionario::setEmail(string email){
    this->email = email;
}
void Funcionario::setMatricula(string matricula){
    this->matricula = matricula;
}

