#include <stdio.h>
#include <stdlib.h>

typedef struct No {
  int valor;
  struct No *prox;
} No;

int main() {
  No *pilha = NULL;

  empilhar(&pilha, 10);
  empilhar(&pilha, 20);
  empilhar(&pilha, 30);

  printf("Valor do topo da pilha: %d\n", topoPilha(pilha));

  int valor = desempilhar(&pilha);
  printf("Elemento desempilhado: %d\n", valor);

  valor = desempilhar(&pilha);
  printf("Elemento desempilhado: %d\n", valor);

  valor = desempilhar(&pilha);
  printf("Elemento desempilhado: %d\n", valor);

  return 0;
}

void empilhar(No **topo, int valor) {
  No *novoNo = malloc(sizeof(No));
  novoNo->valor = valor;
  novoNo->prox = *topo;
  *topo = novoNo;
}

int desempilhar(No **topo) {
  if (*topo == NULL) {
    return -1; // Pilha vazia
  }

  No *noRemovido = *topo;
  *topo = (*topo)->prox;
  int valor = noRemovido->valor;
  free(noRemovido);

  return valor;
}

int topoPilha(No *topo) {
  if (*topo == NULL) {
    return -1; // Pilha vazia
  }

  return (*topo)->valor;
}
