#include "Aluno.h"

Aluno::Aluno(string nome, int codigo, string rg, string cpf, string endereco, string telefone, string email){
    this->nome = nome;
    this->codigo = codigo;
    this->RG = rg;
    this->CPF = cpf;
    this->endereco = endereco;
    this->telefone = telefone;
    this->email = email;
    cout << this->nome << "criado" << endl;
    Aluno::qtdAlunos++;
}

Aluno::~Aluno(){
    cout << "Aluno Destruido" << endl;
    Aluno::qtdAlunos--;
}

string Aluno::getCPF(){
    return this->CPF;
}

int Aluno::getCodigo(){
    return this->codigo;
}

string Aluno::getRG(){
    return this->RG;
}

string Aluno::getEndereco(){
    return this->endereco;
}

string Aluno::getTelefone(){
    return this->telefone;
}

string Aluno::getEmail(){
    return this->email;
}

string Aluno::getNome(){
    return this->nome;
}

void Aluno::setCPF(string cpf){
    this->CPF = cpf;
}

void Aluno::setCodigo(int cod){
    this->codigo = cod;
}

void Aluno::setRG(string rg){
    this->RG = rg;
}

void Aluno::setEndereco(string end){
    this->endereco = end;
}

void Aluno::setTelefone(string tel){
    this->telefone;
}

void Aluno::setEmail(string email){
    this->email;
}

void Aluno::setNome(string nome){
    this->nome = nome;
}

void matricular(Turma *t){
    this->tur = t;
}
