#ifndef VOO_H
#define VOO_H
#include <iostream>
#include "astronauta.h"

using namespace std;

class voo
{
    private:           
        int id;
        astronauta* members;
        int numMembers;
        string status;

    public:
        static int total;
        voo();
        voo(int id);

        int getId();
        astronauta* getMembers();
        int getNumMembers();
        string getStatus();
        static int getTotal();

        void setId(int id);
        void setMembers(astronauta* members);
        void setNumMembers(int numMembers);
        void setStatus(string status);
};

#endif