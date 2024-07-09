# Projeto de LP1

O projeto consiste em implementar um Sistema de Gestão de Astronautas e Voos espaciais para a disciplina Linguagem de Programação 1. 

## Índice

- [Sobre](#sobre)
- [Instalação do MinGW](#instalando-o-mingw-no-windows-expandível)
- [Executar o programa](#executar-o-programa)

## Sobre

Este projeto visa explorar conceitos abordados na disciplina de LP1 e revisar o conteúdo das disciplinas de ITP e Pensamento Computacional. O sistema é capaz de realizar as seguintes operações:

- **Cadastrar Astronauta**
  - O usuário deve informar CPF (único), Nome e Idade
  - O status do astronauta é definido como "disponível" por padrão
  - Os valores são armazenados em um vector (library STL)

- **Cadastrar Voo**
  - O usuário deve informar Id (único)
  - O status do voo é definido como "em planejamento" por padrão
  - Os valores também são armazenados em um vector

- **Adicionar Astronauta em Voo**
  - É solicitado o Id do Voo e o CPF do Astronauta (precisam existir)
  - Astronauta só é adicionado se o Voo tiver como status "em planejamento"
  - Astronauta é adicionado no vector de passageiros do Voo
  
- **Remover Astronauta em Voo**
  - É solicitado o Id do Voo e o CPF do Astronauta (precisam existir e o Astronauta precisa ser passageiro do Voo)
  - Astronauta é removido do vector de passageiros do Voo

- **Lançar um Voo**
  - É solicitado o Id do Voo (precisa existir)
  - Precisa ter pelo menos 1 Astronauta no vector de passageiros
  - Precisa que todos os Astronautas tenham o status "disponível"
  - Precisa que o status doo Voo seja "em planejamento"
  - Altera o status do Voo para "em curso"
  - Altera o status de todos os Astronautas passageiros para "indisponível"
  - O Voo é adicionado no vector de voos participados de cada Astronauta 

- **Explodir um Voo**
  - É solicitado o Id do Voo (precisa existir)
  - Precisa que o status doo Voo seja "em curso"
  - Altera o status do Voo para "finalizado sem sucesso"
  - Altera o status de todos os Astronautas passageiros para "morto"

- **Finalizar um Voo**
  - É solicitado o Id do Voo (precisa existir)
  - Precisa que o status doo Voo seja "em curso"
  - Altera o status do Voo para "finalizado com sucesso"
  - Altera o status de todos os Astronautas passageiros para "disponível"

- **Listar todos os Voos**
  - Lista os Voos por categorias (planejamento, curso, finalizados sem e com sucesso)
  - Lista os Astronautas de cada Voo

- **Listar todos os astronautas mortos**
  - Lista todos os Astronautas com status "morto"
  - Lista cada atributo do Astronauta (cpf, nome, idade e voos participados)

## Instalando o MinGW no Windows (Expandível)

<details>
  <summary>Passo a passo para instalar o MinGW...</summary>

### 1. Baixar o Instalador do MinGW

1. Acesse o site oficial do MinGW: [MinGW](http://www.mingw.org/)
2. Clique em "Download Installer" para baixar o instalador (`mingw-get-setup.exe`).

### 2. Instalar o MinGW

1. Execute o instalador baixado (`mingw-get-setup.exe`).
2. Clique em "Install" na janela de boas-vindas.
3. Escolha o diretório de instalação (o padrão é `C:\MinGW`) e clique em "Continue".
4. Aguarde até que o instalador baixe os arquivos necessários e instale o MinGW.

### 3. Configurar o MinGW

1. Após a instalação, o `MinGW Installation Manager` será aberto automaticamente.
2. No `MinGW Installation Manager`, selecione a opção "Basic Setup" no painel esquerdo.
3. Marque as seguintes opções para instalação:
   - `mingw32-gcc-g++`: Compilador para C++
   - `mingw32-base`: Ferramentas básicas
   - `mingw32-msys-base`: Ferramentas de MSYS
4. Clique em "Installation" no menu superior e depois em "Apply Changes".
5. Na janela que aparecer, clique em "Apply" para iniciar a instalação dos pacotes selecionados.
6. Aguarde a conclusão da instalação.

### 4. Adicionar MinGW ao PATH do Sistema

1. Abra o `Painel de Controle`.
2. Vá para `Sistema e Segurança` > `Sistema` > `Configurações avançadas do sistema`.
3. Na aba `Avançado`, clique em `Variáveis de Ambiente`.
4. Na seção `Variáveis do sistema`, encontre a variável `Path` e clique em `Editar`.
5. Clique em `Novo` e adicione o caminho para o diretório `bin` do MinGW (por exemplo, `C:\MinGW\bin`).
6. Clique em `OK` para fechar todas as janelas.

### 5. Verificar a Instalação

1. Abra o `Prompt de Comando` ou `PowerShell`.
2. Digite `g++ --version` e pressione `Enter` para verificar se o compilador foi instalado corretamente. Você deve ver a versão do `g++` instalada.
3. Digite `mingw32-make --version` e pressione `Enter` para verificar se o `make` foi instalado corretamente. Você deve ver a versão do `make` instalada.

</details>


## Executar o programa

No terminal digite:
- Compilar os arquivos: ```make``` ou ```mingw32-make```
- Executar a aplicação: ```./main```
- Limpar os arquivos de compilação: ```make clean``` ou ```mingw32-make clean```
