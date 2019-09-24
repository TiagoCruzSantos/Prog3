#ifndef _FORMA_3D_
#define _FORMA_2D_
#include "Forma.h"

class Forma3d: public Forma{
    public:
        virtual double calcularVolume() = 0;
};

#endif