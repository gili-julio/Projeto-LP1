#include "controller.h"

vector<Astronauta> Controller::astronautas;

static void addAstronauta(Astronauta& a)
{
    Controller::astronautas.push_back(a);
}
static void printAstronautas()
{
    for (Astronauta a : Controller::astronautas)
    {
        cout << "Nome: " << a.getName() << ", CPF: " << a.getCpf() << ", Idade: " << a.getAge() << ", Status: " << a.getStatus() << endl;
    }
}

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
    addAstronauta(astronauta);
    cout << "Astronauta " << astronauta.getName() << " criado com sucesso." << endl;
}
void imprimirAstronautas()
{
    printAstronautas();
}

void createVoo()
{

}