#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pessoa.h"

#define MAX 100

int main() {
    Pessoa* vetor[MAX];
    int total = 0;
    
    printf("=== ATIVIDADE TAD PESSOA ===\n");
    
    // 1. INSERÇÃO
    printf("\n1. INSERINDO PESSOAS NO VETOR:\n");
    vetor[total++] = pessoa_cria("João", 25, "Rua A, 123");
    vetor[total++] = pessoa_cria("Maria", 30, "Rua B, 456");
    vetor[total++] = pessoa_cria("Carlos", 22, "Rua C, 789");
    printf("3 pessoas inseridas com sucesso!\n");
    
    // 2. PERCORRIMENTO
    printf("\n2. PERCORRENDO OS NÓS EXISTENTES:\n");
    for(int i = 0; i < total; i++) {
        printf("Pessoa %d: ", i+1);
        pessoa_exibe(vetor[i]);
    }
    
    // 3. EDIÇÃO
    printf("\n3. EDITANDO UM NÓ (Maria):\n");
    printf("Antes da edição: ");
    pessoa_exibe(vetor[1]);
    pessoa_atribui(vetor[1], "Maria Silva", 31, "Rua B, 458");
    printf("Depois da edição: ");
    pessoa_exibe(vetor[1]);
    
    // 4. REMOÇÃO
    printf("\n4. REMOVENDO UM NÓ (João):\n");
    pessoa_libera(vetor[0]);
    for(int i = 0; i < total-1; i++) {
        vetor[i] = vetor[i+1];
    }
    total--;
    printf("Nó removido com sucesso!\n");
    
    // PERCORRENDO APÓS REMOÇÃO
    printf("\n5. LISTA FINAL APÓS EDIÇÃO E REMOÇÃO:\n");
    for(int i = 0; i < total; i++) {
        printf("Pessoa %d: ", i+1);
        pessoa_exibe(vetor[i]);
    }
    
    // LIBERA MEMÓRIA
    printf("\nLIBERANDO MEMÓRIA:\n");
    for(int i = 0; i < total; i++) {
        pessoa_libera(vetor[i]);
    }
    
    printf("\nPrograma finalizado com sucesso!\n");
    return 0;
}