#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *esquerdo, *direito;
	int altura;
}No;

No* novoNo(int x){
	No *novo=malloc(sizeof(No));
	
	if(novo){
		novo->valor=x;
		novo->esquerdo=NULL;
		novo->direito=NULL;
		novo->altura=0;
	}else{
		printf("Erro ao alocar a memoria.\n");
	}
	return novo;
}

int maior(int a, int b){
	return(a>b)?a:b;
}

int alturaNo(No *no){
	if (no==NULL){
		return -1;
	}else{
		return no->altura;
	}
}

int fatorBalanceamento(No *no){
	if(no){
		return (alturaNo(no->esquerdo) - alturaNo(no->direito));
	}else{
		return 0;
	}
}

No* rotacaoEsquerda(No *r){
	No *y, *f;
	
	y=r->direito;//aponta para a subarvore da direita
	f=y->esquerdo;//aponta para a subarvore da esquerda
	
	y->esquerdo=r;//o filho esquedo de y passa a ser a raiz r
	r->direito=f;//o filho direito de r passa a ser f
	//recalcula a altura dos nós que foram movimentados
	r->altura=maior(alturaNo(r->esquerdo),alturaNo(r->direito))+1;
	y->altura=maior(alturaNo(y->esquerdo),alturaNo(y->direito))+1;
	
	return y;//retorna a nova raiz
}

No* rotacaoDireita(No *r){
	No *y, *f;
	
	y=r->esquerdo;//aponta para a subarvore da esquerda
	f=y->direito;//aponta para a subarvore da direita
	
	y->direito=r;//o filho direito de y passa a ser a raiz r
	r->esquerdo=f;//o filho esquerdo de r passa a ser f
	//recalcula a altura dos nos que foram movimentaDOS
	r->altura=maior(alturaNo(r->esquerdo),alturaNo(r->direito))+1;
	y->altura=maior(alturaNo(y->esquerdo),alturaNo(y->direito))+1;
	
	return y;//retorna a nova raiz
}

No* rotacaoEsquerdaDireita(No *r){
	r->esquerdo=rotacaoEsquerda(r->esquerdo);
	return rotacaoDireita(r);
}

No* rotacaoDireitaEsquerda(No *r){
	r->direito=rotacaoDireita(r->direito);
	return rotacaoEsquerda(r);
}

No* balancear(No *raiz){
	int fb=fatorBalanceamento(raiz);
	
	if (fb<-1 && fatorBalanceamento(raiz->direito)<=0)
		raiz=rotacaoEsquerda(raiz);
	else if (fb>1 && fatorBalanceamento(raiz->esquerdo)>=0)
		raiz=rotacaoDireita(raiz);
		else if (fb>1 && fatorBalanceamento(raiz->esquerdo)<0)
			raiz=rotacaoEsquerdaDireita(raiz);
			else if (fb<-1 && fatorBalanceamento(raiz->direito)>0)
				raiz=rotacaoDireitaEsquerda(raiz);
					
	return raiz;
}

No* inserir(No *raiz, int x){
	if (raiz==NULL)
		return(novoNo(x));
	else {
		if (x<raiz->valor)
			raiz->esquerdo=inserir(raiz->esquerdo,x);
		else if (x>raiz->valor)
			raiz->direito=inserir(raiz->direito,x);
			else 
				printf("\nFalha na insercao de %d",x);
	}
	raiz->altura=maior(alturaNo(raiz->esquerdo),alturaNo(raiz->direito))+1;
	raiz=balancear(raiz);
}

No* remover(No *raiz, int chave){
	if(raiz==NULL){
		printf("\nValor nao encontrado\n");
		return NULL;
	}else{
		if(raiz->valor==chave){
			if(raiz->esquerdo==NULL && raiz->direito==NULL){
				free(raiz);
				printf("\nElemento folha removido: %d\n",chave);
				return NULL;
			}else{
				if(raiz->esquerdo==NULL && raiz->direito==NULL){
					No *aux=raiz->esquerdo;
					while(aux->direito!=NULL)
						aux=aux->direito;
					raiz->valor=aux->valor;
					aux->valor=chave;
					printf("\nElemento trocado: %d\n",chave);
					raiz->esquerdo=remover(raiz->esquerdo, chave);
					return raiz;
				}else{
					No *aux;
					if(raiz->esquerdo!=NULL)
						aux=raiz->direito;
					else
						aux=raiz->direito;
					free(raiz);
					printf("\nElemento com 1 filho removido %d\n",chave);
					return aux;
				}
			}
		}else{
			if(chave<raiz->valor)
				raiz->esquerdo=remover(raiz->esquerdo, chave);
			else
				raiz->direito=remover(raiz->direito, chave);
		}
		raiz->altura=maior(alturaNo(raiz->esquerdo),alturaNo(raiz->direito))+1;
		raiz=balancear(raiz);
		return(raiz);
	}
}

void imprimir(No *raiz, int nivel){
	int i;
	if (raiz){
		imprimir(raiz->direito, nivel+1);
		printf("\n\n");
		
		for(i=0; i<nivel; i++)
			printf("\t");
			
		printf("%d",raiz->valor);
		imprimir (raiz->esquerdo,nivel+1);
	}
}
		
int main(){
	int opcao, valor;
	int nivel;
	No *raiz=NULL;
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
          	raiz = remover(raiz, valor);
          	break;
    	case 4:
        	printf("Impressão da árvore:\n   ");
        	imprimir(raiz, nivel);
        	break;
      	default:
        	if(opcao != 0){
          		printf("Opcao invalida");
        	};
    }
  }while(opcao != 0);
  return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

















