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
