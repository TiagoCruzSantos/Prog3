#include "Produto.h"

Produto::Produto(){
    
}
Produto::~Produto(){
    
}

int Produto::getCodigo(){
    return this->codigo;
}
string Produto::getNome(){
    return this->nome;
}
string Produto::getDescricao(){
    return this->descricao;
}
int Produto::getQuantidadeEstoque(){
    return this->quantidadeEstoque;
}
float Produto::getPrecoBase(){
    return this->precoBase;
}

void Produto::setCodigo(int cod){
    this->codigo = cod;
}
void Produto::setNome(string nome){
    this->nome = nome;
}
void Produto::setDescricao(string descricao){
    this->descricao = descricao;
}
void Produto::setQuantidadeEstoque(int qtdEs){
    this->quantidadeEstoque = qtdEs;
}
void Produto::setPrecoBase(float preco){
    this->precoBase = preco;
}


