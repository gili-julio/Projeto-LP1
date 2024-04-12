#ifndef VOO_H
#define VOO_H
#include "astronauta.h"
#include <vector>
using namespace std;

class Voo
{
    private:           
        int id;
        vector<Astronauta> members;
        int numMembers;
        string status;
        static int total;

    public:
        Voo();
        Voo(int id);
        //Voo(Voo &v);

        int getId();
        vector<Astronauta>& getMembers();
        int getNumMembers();
        string getStatus();
        static int getTotal();

        void setId(int id);
        void setMembers(vector<Astronauta>& members);
        void setNumMembers(int numMembers);
        void setStatus(string status);
};

#endif