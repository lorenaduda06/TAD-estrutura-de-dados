#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Pessoa.h"

Pessoa* pessoa_create(Pessoa* p_array[], int *tam) {
    Pessoa *pes = (Pessoa*) malloc(sizeof(Pessoa));

    if (pes == NULL) {
        printf ("Erro: nao ha memoria disponivel");
        return NULL;
    }

    printf ("Nome..: ");
    getchar();
    fgets(pes->nome, sizeof(pes->nome), stdin);

    printf ("Idade..: ");
    scanf ("%d", &pes->idade);

    printf ("Endereco..: ");
    getchar();
    fgets(pes->endereco, sizeof(pes->endereco), stdin);

    p_array[*tam] = pes;
    (*tam)++;

    printf ("\nPessoa foi adicionada ao vetor!\n");

    return pes;
}

void pessoa_list(Pessoa* p_array[], int tam) {
    if (tam == 0) {
        printf ("\nO vetor esta vazio\n");
        return;
    }
    else {
        for (int i = 0; i < tam; i++) {
            printf ("\nPessoa [%d] - Nome: %s | Idade: %d | Endereco: %s\n", i, p_array[i]->nome, p_array[i]->idade, p_array[i]->endereco);
        }
    }
}

void pessoa_update(Pessoa* p_array[], int tam, int p) {
    if (p < 0 || p >= tam) {
        printf ("\nErro: o indice deve estar entre 0-%d\n", tam - 1);
        return;
    }

    printf ("Novo nome..: ");
    getchar();
    fgets(p_array[p]->nome, sizeof(p_array[p]->nome), stdin);

    printf ("Nova idade..: ");
    scanf ("%d", &p_array[p]->idade);

    printf ("Novo endereco..: ");
    getchar();
    fgets(p_array[p]->endereco, sizeof(p_array[p]->endereco), stdin);
    
    printf ("\nPessoa [%d] foi atualizada!\n", p);
}

void pessoa_remove(Pessoa* p_array[], int *tam, int p) {
    if (p < 0 || p >= *tam) {
        printf ("\nErro: o indice deve estar entre 0-%d\n", *tam - 1);
        return;
    }

    free(p_array[p]);

    for (int i = p; i < *tam - 1; i++) {
        p_array[i] = p_array[i + 1];
    }

    (*tam)--;

    printf ("\nPessoa [%d] foi removida do array\n", p);
}

int main() {
    Pessoa *pes[100];
    int tam = 0;
    int p, op;

    do {
        printf ("\n** MENU **\n");
        printf ("\n1 - Inserir\n");
        printf ("\n2 - Listar\n");
        printf ("\n3 - Atualizar\n");
        printf ("\n4 - Remover\n");
        printf ("\n0 - Sair\n");

        printf ("\nOpcao..: ");
        scanf ("%d", &op);

        if (op == 1) {
            printf ("\nINSERCAO\n");
            pessoa_create(pes, &tam);
        }
        else if (op == 2) {
            printf ("\nLISTAGEM\n");
            pessoa_list(pes, tam);
        }
        else if (op == 3) {
            printf ("\nATUALIZACAO\n");
            printf ("Indice da pessoa que deseja atualizar os dados: ");
            scanf ("%d", &p);
            pessoa_update(pes, tam, p);
        }
        else if (op == 4) {
            printf ("\nREMOCAO\n");
            printf ("Indice da pessoa que deseja remover do array: ");
            scanf ("%d", &p);
            pessoa_remove(pes, &tam, p);
        }
        else if (op != 0) {
            printf ("\nDigite uma opcao de 0-4\n");
        }
    } while (op != 0);

    for (int i = 0; i < tam; i++) {
        free(pes[i]); 
    }

    printf ("\nPrograma encerrado\n");

    return 0;
}