#include <iostream>
#include <vector>
#include <string>
#include "Pessoa.h"


using namespace std;

int main(){
    tm tempo;
    time_t now = time(0);
    tm *agr = localtime(&now);
    tempo.tm_year = agr->tm_year + 1900;
    tempo.tm_mon = agr->tm_mon + 1;
    tempo.tm_mday = agr->tm_mday;
    Pessoa *p = new Pessoa("Quero morrer", "19231", "192.168.1.1", tempo);
    cout << p->getNome() << endl;
    cout << p->getDataNascimento().tm_year << endl;
    cout << p->getDataNascimento().tm_mon << endl;
    cout << p->getDataNascimento().tm_mday << endl;
    delete p;
    return 0;
}
