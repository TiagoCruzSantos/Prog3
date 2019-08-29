#include "Turma.h"

Turma::Turma(){
    Turma::qtdTurmas++;    
}

Turma::~Turma(){
    Turma::qteTurmas--;
}

void Turma::alocarProfessor(Professor *p){
    this->prof = p;
}
