#include "astronauta.h"

//Construtores
astronauta::astronauta()
{
    astronauta::cpf = "000.000.000-00";
    astronauta::name = "unknown";
    astronauta::age = 0;
    astronauta::status = "disponivel";
}
astronauta::astronauta(string cpf, string name, int age)
{
    astronauta::cpf = cpf;
    astronauta::name = name;
    astronauta::age = age;
    astronauta::status = "disponivel";
}

//Getters
int astronauta::getAge()
{
    return astronauta::age;
}
string astronauta::getCpf()
{
    return astronauta::cpf;
}
string astronauta::getName()
{
    return astronauta::name;
}
string astronauta::getStatus()
{
    return astronauta::status;
}

//Setters
void astronauta::setAge(int age)
{
    astronauta::age = age;
}
void astronauta::setCpf(string cpf)
{
    astronauta::cpf = cpf;
}
void astronauta::setName(string name)
{
    astronauta::name = name;
}
void astronauta::setStatus(string status)
{
    astronauta::status = status;
}