#include "controller.h"



void exibirEscolhas()
{
    int escolha;
    while(escolha != 0)
    {
        
        cout << "0 - Encerrar o programa" << endl ;
        cout << "1 - Cadastrar Astronauta" << endl ;
        cout << "2 - Cadastrar Voo" << endl ;
        cout << "3 - Adicionar Astronauta em Voo (por cpf)" << endl ;
        cout << "4 - Remover Astronauta de Voo (por cpf)" << endl ;
        cout << "5 - Lançar um voo (por id)" << endl ;
        cout << "6 - Explodir voo (por id)" << endl ;
        cout << "7 - Finalizar um voo (por id)" << endl ;
        cout << "8 - Listar todos os voos" << endl ;
        cout << "9 - Listar todos os astronautas mortos" << endl ;
        cout << "Escolha uma acao: ";
        cin >> escolha;

        switch (escolha)
        {
        case 0:
            cout << "Encerrando programa...";
            break;
        case 1:
            createAstronauta();
            break;
        case 9:
            imprimirAstronautas();
            break;
        default:
            cout << "Escolha invalida!" << endl;
            break;
        }
    }
}

int main ()
{
    exibirEscolhas();
    return 0;
}