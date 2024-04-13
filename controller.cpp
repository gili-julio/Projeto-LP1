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
static Astronauta& buscarAstronauta(string cpf)
{
    for (Astronauta& a : Controller::astronautas)
    {
        if(a.getCpf() == cpf)
        {
            return a;
        }
    }
}

void createAstronauta()
{
    string cpf, name;
    int age;
    cout << "CPF: ";
    cin >> cpf;
    cin.ignore(); //ignorar o caractere de nova linha
    cout << "Nome: ";
    getline(cin, name); //lê a linha inteira, incluindo espaços
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
static void printMembers(vector<Astronauta>& astronautas)
{
    for (Astronauta a : astronautas)
    {
        cout << "Nome: " << a.getName() << ", CPF: " << a.getCpf() << ", Idade: " << a.getAge() << ", Status: " << a.getStatus() << endl;
    }
}
static void printVoosPlanejados()
{
    cout << ">>> Voos em Planejamento:" << endl;
    for (Voo v : Controller::voos)
    {
        if(v.getStatus() == "planejamento")
        {
            cout << "> Id: " << v.getId() << ", Passageiros: " << endl;
            printMembers(v.getMembers());
        }
    }
}
static void printVoosEmCurso()
{
    cout << ">>> Voos em curso:" << endl;
    for (Voo v : Controller::voos)
    {
        if(v.getStatus() == "em_curso")
        {
            cout << "> Id: " << v.getId() << ", Passageiros: " << endl;
            printMembers(v.getMembers());
        }
    }
}
static void printVoosFinalizados()
{
    cout << ">>> Voos finalizados:" << endl;
    for (Voo v : Controller::voos)
    {
        if(v.getStatus() != "planejamento" && v.getStatus() != "em_curso")
        {
            cout << "> Id: " << v.getId() << ", Status: " << v.getStatus() << ", Passageiros: " << endl;
            printMembers(v.getMembers());
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
void addAstronautaEmVoo()
{
    int id = 0;
    cout << "Id do voo: ";
    cin >> id;
    Voo* possivelVoo = nullptr;
    for (Voo& v : Controller::voos)
    {
        if(v.getId() == id)
        {
            possivelVoo = &v;
            break;
        }
    }
    if(possivelVoo == nullptr)
    {
        cout << "Voo não encontrado." << endl;
        return;
    }

    string cpf = "";
    cout << "Cpf do astronauta: ";
    cin >> cpf;
    Astronauta* possivelAstronauta = nullptr;
    for (Astronauta& a : Controller::astronautas)
    {
        if(a.getCpf() == cpf)
        {
            possivelAstronauta = &a;
            break;
        }
    }
    if(possivelAstronauta == nullptr)
    {
        cout << "Astronauta não encontrado." << endl;
        return;
    }

    vector<Astronauta>& membros = possivelVoo->getMembers();
    membros.push_back(*possivelAstronauta);
    possivelVoo->setNumMembers(possivelVoo->getNumMembers()+1);
    possivelVoo->setMembers(membros);
}