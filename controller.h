#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "voo.h"
using namespace std;

class Controller
{
    public:
        static vector<Astronauta> astronautas;
        static void addAstronauta(Astronauta& a);
        static void printAstronautas();
        static void printAstronautasMortos();
        static Astronauta& buscarAstronauta(string cpf);

        static vector<Voo> voos;
        static void addVoo(Voo& v);
        static void printMembers(vector<Astronauta>& astronautas);
        static void printVoosPlanejados();
        static void printVoosEmCurso();
        static void printVoosFinalizados();
};
void createAstronauta();
void listarAstronautas();
void listarAstronautasMortos();

void createVoo();
void listarVoos();
void addAstronautaInVoo();
void removeAstronautaInVoo();
void launchVoo();



#endif