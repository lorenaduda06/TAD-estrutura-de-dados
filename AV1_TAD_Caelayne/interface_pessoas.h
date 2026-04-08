#ifndef PESSOAS_H
#define PESSOAS_H

struct pessoa {
    char nome[100];
    int idade;
    char endereco[100];
};

typedef struct pessoa Pessoa;

void inserirPessoa(char*nome, int idade, char*endereco);
void percorrerPessoas();
void editarPessoa(int index, char*nome, int idade, char*endereco);
void removerPessoa(int index);


#endif