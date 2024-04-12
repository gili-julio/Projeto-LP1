#include "controller.h"

//Parte dos Astronautas
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
static void printAstronautasMortos()
{
    for (Astronauta a : Controller::astronautas)
    {
        if(a.getStatus() == "morto")
        {
            cout << "Nome: " << a.getName() << ", CPF: " << a.getCpf() << ", Idade: " << a.getAge() << ", Status: " << a.getStatus() << endl;
        }
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
    cout << "Astronauta " << astronauta.getName() << " cadastrado com sucesso." << endl;
}
void listarAstronautas()
{
    printAstronautas();
}
void listarAstronautasMortos()
{
    printAstronautasMortos();
}

//Parte dos Voos
vector<Voo> Controller::voos;

static void addVoo(Voo& v)
{
    Controller::voos.push_back(v);
}
static void printVoosPlanejados()
{
    cout << "Voos em Planejamento:" << endl;
    for (Voo v : Controller::voos)
    {
        if(v.getStatus() == "planejamento")
        {
            cout << "Id: " << v.getId() << ", Passageiros: " << v.getMembers() << endl;
        }
    }
}
static void printVoosEmCurso()
{
    cout << "Voos em curso:" << endl;
    for (Voo v : Controller::voos)
    {
        if(v.getStatus() == "em_curso")
        {
            cout << "Id: " << v.getId() << ", Passageiros: " << v.getMembers() << endl;
        }
    }
}
static void printVoosFinalizados()
{
    cout << "Voos finalizados:" << endl;
    for (Voo v : Controller::voos)
    {
        if(v.getStatus() != "planejamento" && v.getStatus() != "em_curso")
        {
            cout << "Id: " << v.getId() << ", Passageiros: " << v.getMembers() << ", Status: " << v.getStatus() << endl;
        }
    }
}

void createVoo()
{
    int id;
    cout << "Id: ";
    cin >> id;

    Voo voo(id);
    addVoo(voo);
    cout << "Voo " << voo.getId() << " cadastrado com sucesso." << endl;
}
void listarVoos()
{
    printVoosPlanejados();
    printVoosEmCurso();
    printVoosFinalizados();
}