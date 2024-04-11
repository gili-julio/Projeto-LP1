#include "voo.h"

int Voo::total = 0;

//Construtores
Voo::Voo()
{
    Voo::id = Voo::total;
    Voo::members = new Astronauta[0];
    Voo::numMembers = 0;
    Voo::status = "planejamento";

    Voo::total++;
}
Voo::Voo(int id)
{
    Voo::id = id;
    Voo::members = new Astronauta[0];
    Voo::numMembers = 0;
    Voo::status = "planejamento";

    Voo::total++;
}

//Getters
int Voo::getId()
{
    return Voo::id;
}
Astronauta* Voo::getMembers()
{
    return Voo::members;
}
int Voo::getNumMembers()
{
    return Voo::numMembers;
}
string Voo::getStatus()
{
    return Voo::status;
}
int Voo::getTotal()
{
    return Voo::total;
}

//Setters
void Voo::setId(int id)
{
    Voo::id = id;
}
void Voo::setMembers(Astronauta *members)
{
    Voo::members = members;
}
void Voo::setNumMembers(int numMembers)
{
    Voo::numMembers = numMembers;
}
void Voo::setStatus(string status)
{
    Voo::status = status;
}
