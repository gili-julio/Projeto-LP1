#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H
#include <iostream>

using namespace std;

class astronauta
{
    private:             
        string cpf;
        string name;
        int age;
        string status; 

    public:
        astronauta();
        astronauta(string cpf, string name, int age);

        int getAge();
        string getCpf();
        string getName();
        string getStatus();

        void setAge(int age);
        void setCpf(string cpf);
        void setName(string name);
        void setStatus(string status);
};

#endif