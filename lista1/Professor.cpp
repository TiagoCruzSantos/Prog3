#include "Professor.h"
Professor::Professor(){
    this->dataAdimissao = {0,0,0,0,0,0};
    this->CPF = "NAO INFORMADO";
    this->RG = "NAO INFORMADO";
    this->endereco = "NAO INFORMADO";
    this->telefone = "NAO INFORMADO";
    this->email = "NAO INFORMADO";
    this->nome = "NAO INFORMADO";
}

void Professor::setProfessor(tm adm, string cpf, string rg, string end, string tel, string email, string nome){
    this->dataAdimissao = adm;
    this->CPF = cpf;
    this->RG = rg;
    this->endereco = end;
    this->telefone = tel;
    this->email = email;
    this->nome = nome;
    Professor::qtdProfessores++;
}

string Professor::getProfessor(){
    return this->nome;
}

void Professor::setDem(tm dem){
    this->dataDemissao = dem;
}

Professor::~Professor(){
    cout << "Professor deletado" << endl;
}
