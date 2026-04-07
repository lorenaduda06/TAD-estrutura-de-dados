#ifndef PESSOA_H
#define PESSOA_H

struct pessoa {
    char nome[100];
    int idade;
    char endereco[500];
};

typedef struct pessoa Pessoa;

Pessoa* pessoa_create(Pessoa* p_array[], int *tam);

void pessoa_list(Pessoa* p_array[], int tam);

void pessoa_update(Pessoa* p_array[], int tam, int p);

void pessoa_remove(Pessoa* p_array[], int *tam, int p);

#endif