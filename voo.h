#ifndef VOO_H
#define VOO_H
#include "astronauta.h"
using namespace std;

class Voo
{
    private:           
        int id;
        Astronauta* members;
        int numMembers;
        string status;
        static int total;

    public:
        Voo();
        Voo(int id);

        int getId();
        Astronauta* getMembers();
        int getNumMembers();
        string getStatus();
        static int getTotal();

        void setId(int id);
        void setMembers(Astronauta* members);
        void setNumMembers(int numMembers);
        void setStatus(string status);
};

#endif