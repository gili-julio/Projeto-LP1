#include "controller.h"

//Parte dos Astronautas

//Auxiliares
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

//Funcionalidades
void createAstronauta()
{
    string cpf, name;
    int age;
    cout << "CPF: ";
    cin >> cpf;
    for(Astronauta& a : Controller::astronautas)
    {
        if(a.getCpf() == cpf)
        {
            cout << "Cpf informado já cadastrado." << endl;
            return;
        }
    }
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

//Auxiliares
vector<Voo> Controller::voos;
static void addVoo(Voo& v)
{
    Controller::voos.push_back(v);
}
static void printMembers(vector<Astronauta>& astronautas)
{
    for (Astronauta& a : astronautas)
    {
        for (Astronauta& astro : Controller::astronautas)
        {
            if(a.getCpf() == astro.getCpf())
            {
                cout << "Nome: " << astro.getName() << ", CPF: " << astro.getCpf() << ", Idade: " << astro.getAge() << ", Status: " << astro.getStatus() << endl;
            }
        }
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
        if(v.getStatus() == "em curso")
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
        if(v.getStatus() != "planejamento" && v.getStatus() != "em curso")
        {
            cout << "> Id: " << v.getId() << ", Status: " << v.getStatus() << ", Passageiros: " << endl;
            printMembers(v.getMembers());
        }
    }
}

//Funcionalidades
void createVoo()
{
    int id;
    cout << "Id do voo: ";
    cin >> id;
    for(Voo& v : Controller::voos)
    {
        if(v.getId() == id)
        {
            cout << "Id do voo informado já cadastrado." << endl;
            return;
        }
    }

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
void addAstronautaInVoo()
{
    int id;
    cout << "Id do voo: ";
    cin >> id;
    Voo* possivelVoo = nullptr;
    for (Voo& v : Controller::voos)
    {
        if(v.getId() == id)
        {
            if(v.getStatus() != "planejamento")
            {
                cout << "Voo informado não está em fase de planejamento." << endl;
                return;
            }
            possivelVoo = &v;
            break;
        }
    }
    if(possivelVoo == nullptr)
    {
        cout << "Voo não encontrado." << endl;
        return;
    }

    string cpf;
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
    cout << "Astronauta adicionado com sucesso." << endl;
}
void removeAstronautaInVoo()
{
    int id;
    cout << "Id do voo: ";
    cin >> id;
    Voo* possivelVoo = nullptr;
    for (Voo& v : Controller::voos)
    {
        if(v.getId() == id)
        {
            if(v.getStatus() != "planejamento")
            {
                cout << "Voo informado não está em fase de planejamento." << endl;
                return;
            }
            possivelVoo = &v;
            break;
        }
    }
    if(possivelVoo == nullptr)
    {
        cout << "Voo não encontrado." << endl;
        return;
    }

    string cpf;
    cout << "Cpf do astronauta: ";
    cin >> cpf;

    vector<Astronauta>& membros = possivelVoo->getMembers();
    vector<Astronauta> novosMembros;
    for (Astronauta& a : membros)
    {
        if(a.getCpf() != cpf)
        {
            novosMembros.push_back(a);
        }else{
            possivelVoo->setNumMembers(possivelVoo->getNumMembers()-1);
        }
    }
    possivelVoo->setMembers(novosMembros);
    cout << "Astronauta removido com sucesso." << endl;
}
void launchVoo()
{
    int id;
    cout << "Id do voo: ";
    cin >> id;
    Voo* possivelVoo = nullptr;
    for (Voo& v : Controller::voos)
    {
        if(v.getId() == id)
        {
            if(v.getStatus() != "planejamento")
            {
                cout << "Voo informado não está em fase de planejamento." << endl;
                return;
            }
            possivelVoo = &v;
            vector<Astronauta>& membros = possivelVoo->getMembers();
            if(possivelVoo->getNumMembers() <= 0)
            {
                cout << "Não foi possível lançar o voo " << id << "." << endl;
                cout << "É necessário que tenha pelo menos 1 astronauta no voo." << endl;
                return;
            }
            for(Astronauta& a : membros)
            {
                for(Astronauta& astro : Controller::astronautas)
                {
                    if(a.getCpf() == astro.getCpf())
                    {
                        if(astro.getStatus() != "disponivel")
                        {
                            cout << "Não foi possível lançar o voo " << id << "." << endl;
                            cout << "Astronauta " << astro.getName() << " está " << astro.getStatus() << "." << endl;
                            return;
                        }
                    }
                }
            }
            break;
        }
    }

    //Voo pode ser lançado
    possivelVoo->setStatus("em curso");
    vector<Astronauta>& novoMembros = possivelVoo->getMembers();
    for(Astronauta& a : novoMembros)
    {
        for(Astronauta& astro : Controller::astronautas)
        {
            if(a.getCpf() == astro.getCpf())
            {
                astro.setStatus("indisponivel");
            }
        }
    }
    possivelVoo->setMembers(novoMembros);
    cout << "Voo " << possivelVoo->getId() << " lançado com sucesso." << endl;
}