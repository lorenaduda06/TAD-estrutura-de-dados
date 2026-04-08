#ifndef PESSOA_H
#define PESSOA_H

struct pessoa {
    char nome[100];
    int idade;
    char endereco[200];
};

typedef struct pessoa Pessoa;

Pessoa* pessoa_cria(char* nome, int idade, char* endereco);
void pessoa_libera(Pessoa* p);
void pessoa_acessa(Pessoa* p, char* nome, int* idade, char* endereco);
void pessoa_atribui(Pessoa* p, char* nome, int idade, char* endereco);
void pessoa_exibe(Pessoa* p);

#endif