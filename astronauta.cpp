#include "astronauta.h"

int Astronauta::total = 0;

//Construtores
Astronauta::Astronauta()
{
    Astronauta::cpf = "000.000.000-00";
    Astronauta::name = "unknown";
    Astronauta::age = 0;
    Astronauta::status = "disponivel";

    Astronauta::total++;
}
Astronauta::Astronauta(string cpf, string name, int age)
{
    Astronauta::cpf = cpf;
    Astronauta::name = name;
    Astronauta::age = age;
    Astronauta::status = "disponivel";

    Astronauta::total++;
}

//Getters
int Astronauta::getAge()
{
    return Astronauta::age;
}
string Astronauta::getCpf()
{
    return Astronauta::cpf;
}
string Astronauta::getName()
{
    return Astronauta::name;
}
string Astronauta::getStatus()
{
    return Astronauta::status;
}
vector<int>& Astronauta::getIdVoosParticipados()
{
    return Astronauta::idVoosParticipados;
}
int Astronauta::getTotal()
{
    return Astronauta::total;
}

//Setters
void Astronauta::setAge(int age)
{
    Astronauta::age = age;
}
void Astronauta::setCpf(string cpf)
{
    Astronauta::cpf = cpf;
}
void Astronauta::setName(string name)
{
    Astronauta::name = name;
}
void Astronauta::setStatus(string status)
{
    Astronauta::status = status;
}
void Astronauta::setIdVoosParticipados(vector<int>& ids)
{
    Astronauta::idVoosParticipados = ids;
}