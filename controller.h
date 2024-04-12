#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "voo.h"
#include <vector>
using namespace std;

class Controller
{
    public:
        static vector<Astronauta> astronautas;
        static void addAstronauta(Astronauta& a);
        static void printAstronautas();
};
void imprimirAstronautas();
void createAstronauta();
void createVoo();



#endif