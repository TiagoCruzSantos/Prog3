#include "Pessoa.h"

Pessoa::Pessoa(string nome, string rg, string cpf, tm data){
    this->nome = nome;
    this->rg = rg;
    this->cpf = cpf;
    this->dataNascimento = data;
}

string Pessoa::getNome() {
    return this->nome;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

tm Pessoa::getDataNascimento() {
    return this->dataNascimento;
}

void Pessoa::setDataNascimento(tm dataNascimento) {
    this->dataNascimento = dataNascimento;
}

string Pessoa::getCpf() {
    return this->cpf;
}

void Pessoa::setCpf(string cpf) {
    this->cpf = cpf;
}

string Pessoa::getRg() {
    return this->rg;
}

void Pessoa::setRg(string rg) {
    this->rg = rg;
}