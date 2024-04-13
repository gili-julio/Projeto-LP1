#include "controller.h"

void exibirEscolhas()
{
        int escolha;
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
        cout << "10 - Listar todos os astronautas (versao teste do programa)" << endl ;

    while(escolha != 0)
    {
        cout << "11 - Listar todas as acoes de novo" << endl ;
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
        case 2:
            createVoo();
            break;
        case 3:
            addAstronautaInVoo();
            break;
        case 4:
            removeAstronautaInVoo();
            break;
        case 5:
            launchVoo();
            break;
        case 8:
            listarVoos();
            break;
        case 9:
            listarAstronautasMortos();
            break;
        case 10:
            listarAstronautas();
            break;
        case 11:
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
            cout << "10 - Listar todos os astronautas (versao teste do programa)" << endl ;
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