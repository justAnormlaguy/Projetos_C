#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//utilizando funções recursivas para percorrer a arvore inteira
//no tipo arvore
typedef struct no{
  	int valor;
  	struct no *direita, *esquerda;
}noarvore;
//no lista com dados de arvore
typedef struct No{
	noarvore* valor2;
	struct No *prox;
}nofila;
// no lista frente e tras
typedef struct queue{
	nofila* frente;
	nofila* tras;
}queue;
//cria lista para impressão
queue* criafila(){
	queue* fila = (queue*)malloc(sizeof(queue));
	fila->frente = fila->tras = NULL;
	return fila;
}

void enQueue(queue* fila, noarvore* valor){
	nofila* temp = (nofila*)malloc(sizeof(nofila));
	temp->valor2 = valor;
	temp->prox = NULL;
	if(fila->tras == NULL){
		fila->frente = fila->tras = temp;
		return;
	}
	fila->tras->prox = temp;
	fila->tras = temp;
}

noarvore* deQueue(queue* fila){
	if(fila->frente == NULL){
		return NULL;
	}
	nofila* temp = fila->frente;
	noarvore* valor = temp->valor2;
	fila->frente = fila->frente->prox;
	if(fila->frente == NULL){
		fila->tras = NULL;
	}
	free(temp);
	return valor;
}
//-------------------------------------------------ARVORE
noarvore* inserir(noarvore *raiz, int valor){
    if(raiz == NULL){
        noarvore *aux=malloc(sizeof(noarvore));
        aux->valor=valor;
        aux->esquerda=NULL;
        aux->direita=NULL;
        return aux;  
    }
    if(valor == raiz->valor){
    	printf("Pode não\n");
    	system("pause");
	}
    if(valor < raiz->valor){
        raiz->esquerda=inserir(raiz->esquerda, valor);
    } else {
        raiz->direita=inserir(raiz->direita, valor);
    }
    return raiz;  
}


noarvore* menorValor(noarvore *no) {
    noarvore *atual = no;
    while (atual->esquerda != NULL) {
        atual = atual->esquerda;
    }
    return atual;
}

noarvore* excluir(noarvore *raiz, int valor) {
    if (raiz == NULL) {
        return raiz; 
    }

    if (valor < raiz->valor) {
        raiz->esquerda = excluir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = excluir(raiz->direita, valor);
    } else {
        
        if (raiz->esquerda == NULL) {
            noarvore *temp = raiz->direita;
            free(raiz);
            return temp;
        } else if (raiz->direita == NULL) {
            noarvore *temp = raiz->esquerda;
            free(raiz);
            return temp;
        }

        
        noarvore *temp = menorValor(raiz->direita);
        raiz->valor = temp->valor;
        raiz->direita = excluir(raiz->direita, temp->valor);
    }
    return raiz;
}

noarvore* buscar(noarvore *raiz, int valor) {
    if (raiz == NULL || raiz->valor == valor) {
        return raiz; 
    }

    if (valor < raiz->valor) {
        return buscar(raiz->esquerda, valor);
    } else {
        return buscar(raiz->direita, valor);
    }
}

void imprimir(noarvore* raiz, queue* Fila, int nivel){
    if(raiz == NULL){
        return;
    };
    enQueue(Fila, raiz);
    enQueue(Fila, NULL);
    while(Fila->frente){  
    	noarvore *agora = Fila->frente->valor2; 
		raiz = deQueue(Fila);
		int i, cont=0;
			if(cont==0)
            	for(i = 0; i < nivel; i++){
    				printf(" ");
  				} 
  			nivel-=1;
        if(agora != NULL){
            printf(" (%d) ", agora->valor, cont+=1);
			if(agora->esquerda != NULL){
                enQueue(Fila, agora->esquerda);
		    }
            if(agora->direita != NULL){
                enQueue(Fila, agora->direita);
			}
        } else {
            printf("\n\n");
            if(Fila->frente != NULL){
                enQueue(Fila, NULL);
            } else {
                break;
            }
        }
    }
}

int main(){
	setlocale(LC_ALL, "portuguese");
  	queue* Fila = criafila();
  noarvore *raiz = NULL;
  int opcao, valor;
  raiz = inserir(raiz, 50);
  raiz = inserir(raiz, 40);
  raiz = inserir(raiz, 60);
  raiz = inserir(raiz, 30);
  raiz = inserir(raiz, 35);
  raiz = inserir(raiz, 20);
  raiz = inserir(raiz, 65);

  do{
    printf("\n0 - Sair\n1 - Inserir\n2 - Excluir\n3 - Buscar\n4 - Imprimir\n");
    scanf("%d", &opcao);
    switch(opcao){
      case 1:
          printf("Digite um valor: "); 
          scanf("%d", &valor);
          raiz = inserir(raiz, valor);
          break;
        case 2:
          printf("Digite um valor a ser excluido: ");
          scanf("%d", &valor);
          raiz = excluir(raiz, valor);
          break;
    case 3:
        printf("Digite um valor a ser buscado: ");
        scanf("%d", &valor);
        noarvore *resultado = buscar(raiz, valor);
          if (resultado) {
              printf("Valor encontrado na árvore.\n");
          } else {
              printf("Valor não encontrado.\n");
          }
          break;
    case 4:
        printf("Impressão da árvore:\n   ");
        imprimir(raiz, Fila, 12);
        break;
      default:
        if(opcao != 0){
          printf("Opcao invalida");
        };
    }
  }while(opcao != 0);
  return 0;
}
