#ifndef __HORARIO_AULA__
#define __HORARIO_AULA__

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class HorarioAula{
    private:
        string diaSemana;
        tm HorarioInicio;
        tm HorarioFim;
        int codigo;
    public:
        HorarioAula();
        ~HorarioAula();
};

#endif
