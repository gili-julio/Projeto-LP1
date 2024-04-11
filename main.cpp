#include "astronauta.h"

void exibirEscolhas()
{
    cout << "0 - Encerrar o programa" << endl ;
    cout << "1 - Cadastrar Astronauta" << endl ;
    cout << "2 - Cadastrar Voo" << endl ;
    cout << "Escolha uma acao: ";
}

int main ()
{
    exibirEscolhas();
    int escolha;
    while(escolha != 0)
    {
        
        exibirEscolhas();
        cin >> escolha;

        switch (escolha)
        {
        case 0:
            cout << "Encerrando programa...";
            break;
        default:
            cout << "Escolha invalida!" << endl;
            break;
        }
    }

    return 0;
}