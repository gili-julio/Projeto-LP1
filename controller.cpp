#include "controller.h"

Astronauta* astronautas = NULL;
Voo* voos = NULL;

void createAstronauta()
{
    string cpf, name;
    int age;

    cout << "CPF: ";
    cin >> cpf;
    cout << "Nome: ";
    cin >> name;
    cout << "Idade: ";
    cin >> age;

    Astronauta astronauta(cpf, name, age);
    cout << "Astronauta " << astronauta.getName() << " criado com sucesso." << endl;
    astronautas = (Astronauta*) realloc(astronautas, astronauta.getTotal() * sizeof(Astronauta));
    astronautas[astronauta.getTotal()-1] = astronauta;
}
void createVoo()
{

}