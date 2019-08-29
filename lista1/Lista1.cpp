#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Professor.h"
#include "Aluno.h"

using namespace std;

int Professor::qtdProfessores = 0;
int Aluno::qtdAlunos = 0;

int main(){
    Professor *p;
    p = new Professor();
    cout << p->getProfessor() << endl;
    delete p;
}
