#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pessoa.h"

Pessoa* pessoa_cria(char* nome, int idade, char* endereco) {
    printf("Tamanho de cada nova struct Pessoa: %zu\n", sizeof(Pessoa));
    
    Pessoa* p = (Pessoa*) malloc(sizeof(Pessoa));
    if (p == NULL) {
        printf("Erro: falha na alocação de memória.\n");
        return NULL;
    }
    
    strcpy(p->nome, nome);
    p->idade = idade;
    strcpy(p->endereco, endereco);
    
    return p;
}

void pessoa_libera(Pessoa* p) {
    if (p != NULL) {
        free(p);
        printf("Espaço de memória liberado\n");
    }
}

void pessoa_acessa(Pessoa* p, char* nome, int* idade, char* endereco) {
    if (p == NULL) return;
    if (nome) strcpy(nome, p->nome);
    if (idade) *idade = p->idade;
    if (endereco) strcpy(endereco, p->endereco);
}

void pessoa_atribui(Pessoa* p, char* nome, int idade, char* endereco) {
    if (p == NULL) return;
    strcpy(p->nome, nome);
    p->idade = idade;
    strcpy(p->endereco, endereco);
}

void pessoa_exibe(Pessoa* p) {
    if (p == NULL) return;
    printf("Nome: %s, Idade: %d, Endereço: %s\n", p->nome, p->idade, p->endereco);
}