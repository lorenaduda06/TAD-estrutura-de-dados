#include <stdio.h>
#include <string.h>
#include "interface_pessoas.h"

#define MAX_PESSOAS 100

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

struct Pessoa pessoas[MAX_PESSOAS];
int count = 0;

//Função para inserir uma nova pessoa 
void inserirPessoa(char*nome, int idade, char*endereco){
    if(count<MAX_PESSOAS){
        strcpy(pessoas[count].nome, nome);
        pessoas[count].idade = idade;
        strcpy(pessoas[count].endereco, endereco);
        count++;
    }else{
        printf("Limite de pessoas atingido!\n");
    }
}

//Função para percorrer e mostrar todas as pessoas
void percorrerPessoas(){
    for(int i=0; i<count; i++){
        printf("Nome: %s, Idade: %d, Endereco: %s\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].endereco);
    }
}

//Função para editar uma pessoa
void editarPessoa(int index, char*nome, int idade, char*endereco){
    if(index >= 0 && index < count){
        strcpy(pessoas[index].nome, nome);
        pessoas[index].idade = idade;
        strcpy(pessoas[index].endereco, endereco);
    }else{
        printf("Índice inválido!\n");
    }
}

//Função para remover uma pessoa
void removerPessoa(int index){
    if(index >= 0 && index < count){
        for (int i = index; i < count - 1; i++){
          pessoas[i] = pessoas[i + 1];   
        }
        count--;
    }else{
        printf("Índice inválido!\n");
    }
}

int main(){
    inserirPessoa("Alice", 30, "Rua A, 123");
    inserirPessoa("Bob", 25, "Rua B, 456");

    printf("Lista de Pessoas:\n");
    percorrerPessoas();

    printf("\nEditando a primeira pessoa...\n");
    editarPessoa(0, "Alice Silva", 31, "Rua A, 789");

    printf("Lista Atualizada:\n");
    percorrerPessoas();

    printf("\nRemovendo a segunda pessoa...\n");
    removerPessoa(1);

    printf("Lista Final:\n");
    percorrerPessoas();

    return 0;
}