#include "voo.h"

int voo::total = 0;

//Construtores
voo::voo()
{
    voo::id = voo::total;
    voo::members = new astronauta[0];
    voo::numMembers = 0;
    voo::status = "planejamento";

    voo::total++;
}
voo::voo(int id)
{
    voo::id = id;
    voo::members = new astronauta[0];
    voo::numMembers = 0;
    voo::status = "planejamento";

    voo::total++;
}

//Getters
int voo::getId()
{
    return voo::id;
}
astronauta* voo::getMembers()
{
    return voo::members;
}
int voo::getNumMembers()
{
    return voo::numMembers;
}
string voo::getStatus()
{
    return voo::status;
}
int voo::getTotal()
{
    return voo::total;
}

//Setters
void voo::setId(int id)
{
    voo::id = id;
}
void voo::setMembers(astronauta *members)
{
    voo::members = members;
}
void voo::setNumMembers(int numMembers)
{
    voo::numMembers = numMembers;
}
void voo::setStatus(string status)
{
    voo::status = status;
}
