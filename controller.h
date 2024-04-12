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
        static void printAstronautasMortos();

        static vector<Voo> voos;
        static void addVoo(Voo& v);
        static void printVoosPlanejados();
        static void printVoosEmCurso();
        static void printVoosFinalizados();
};
void createAstronauta();
void listarAstronautas();
void listarAstronautasMortos();

void createVoo();
void listarVoos();



#endif