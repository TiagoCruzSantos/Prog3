#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Professor.h"

using namespace std;

int main(){
    Professor *p;
    p = new Professor();
    cout << p->getProfessor() << endl;
    delete p;
}
