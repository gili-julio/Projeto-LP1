# Projeto de LP1

O projeto consiste em implementar um Sistema de Gestão de Astronautas e Voos espaciais para a disciplina Linguagem de Programação 1. 

## Índice

- [Sobre](#sobre)
- [Instalação](#instalação)
- [Uso](#uso)

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

## Instalação

 - Instalar o MinGW
 - Ter configurado o comando Make

## Uso (funcionando em breve...)

Abra o terminal e siga os passos abaixo:
- make
- ./main
