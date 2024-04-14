#ifndef ASTRONAUTA_H
#define ASTRONAUTA_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Astronauta
{
    private:             
        string cpf;
        string name;
        int age;
        string status;
        vector<int> idVoosParticipados;
        static int total;

    public:
        Astronauta();
        Astronauta(string cpf, string name, int age);

        int getAge();
        string getCpf();
        string getName();
        string getStatus();
        vector<int>& getIdVoosParticipados();
        static int getTotal();

        void setAge(int age);
        void setCpf(string cpf);
        void setName(string name);
        void setStatus(string status);
        void setIdVoosParticipados(vector<int>& ids);
};

#endif