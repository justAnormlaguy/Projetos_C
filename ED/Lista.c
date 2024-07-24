#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	char cpf[20];
	char rg[15];
}pessoa;

typedef struct{
	char ra[13];
	char curso[25];
	pessoa p; 
}aluno;

typedef struct no_{
	aluno al;
	struct no_ *proximo;
}no;

typedef struct{
	no *inicio;
	int tam;
}Lista;

//*****************************************************

void criar_lista(Lista *lista);
aluno entrada_dados();
void inserir_meio(Lista *lista, aluno dados, char *ant);
void inserir_fim(Lista *lista, aluno dados);
void inserir_inicio(Lista *lista, aluno dados);
void inserir_ordenado(Lista *lista, aluno dados);
no* remover(Lista *lista, char *ra);
no* buscar(Lista*lista, char *ra);
void imprimir(Lista lista);
void mostra_dados(no *dados);


//*****************************************************

int main(void){
	int opcao;
	char nome[50];
	no *loc;
	Lista lista;
	aluno dados;
	criar_lista(&lista);
	do{
		system("cls");
		printf("\\Bem vindo ao sitema de Alunos//\n\n");
		printf("Por favor escolha a opção desejada:\n");
		printf("1 - Inserir aluno no inicio;\n");
		printf("2 - Inserir aluno no final;\n");
		printf("3 - Inserir aluno no meio;\n");
		printf("4 - Inserir aluno ordenado;\n");
		printf("5 - Remover aluno;\n");
		printf("6 - Imprimir Lista de alunos;\n");
		printf("0 - Sair;");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
			dados = entrada_dados();
			inserir_inicio(&lista, dados);
			break;
			case 2:
			dados = entrada_dados();
			inserir_fim(&lista, dados);
			break;
			case 3:
				dados = entrada_dados();
				printf("Nome de referencia:");
				scanf("%s", nome);
				inserir_meio(&lista, dados, nome);
				break;
			case 4:
				dados = entrada_dados();
				inserir_ordenado(&lista, dados);
				break;
			case 5:
				printf("Remover Aluno:");
				scanf("%s", nome);
				loc = remover(&lista, nome);
				if (loc) {
					printf("Aluno removido:\n");
					mostra_dados(loc);
					free(loc);
					system("pause");
				} else{
					printf("Aluno não encontrado.\n");
					system("pause");
				}
				break;
			case 6:
				imprimir(lista);
				break;
			default:
				if (opcao != 0){
					printf("Opção invalida.\n");
					system("pause");
				}
		}
	} while (opcao !=0);
	return 0;
}

//*******************************************************

void criar_lista(Lista *lista){
	lista->inicio=NULL;
	lista->tam = 0;
}

aluno entrada_dados(){
	aluno a;
	printf("\nEntre com os dados do aluno: \n");
	printf("Nome: "); scanf("%s", a.p.nome); fflush(stdin);
	printf("CPF: "); scanf("%s", a.p.cpf); fflush(stdin);
	printf("RG: "); scanf("%s", a.p.rg); fflush(stdin);
	printf("RA: "); scanf("%s", a.ra); fflush(stdin);
	printf("Curso: "); scanf("%s", a.curso); fflush(stdin);
	return a;
}

void inserir_inicio(Lista *lista, aluno dados){
	no *novo = malloc(sizeof(no));
	if (novo){
		novo->al = dados;
		novo->proximo = lista->inicio;
		lista->inicio = novo;
		lista->tam++;
	} else {
		printf("Erro ao alocar memoria.");
		system("pause");
	}
}

void inserir_fim(Lista *lista, aluno dados) {
	no *aux, *novo = malloc(sizeof(no));
	if (novo) {
		novo->al = dados;
		novo->proximo = NULL;
		if (lista->inicio == NULL){
			lista->inicio = novo;
		} else {
			aux = lista->inicio;
			while(aux->proximo){
				aux = aux->proximo;
			}
			aux->proximo = novo;
		}
		lista->tam++;
	} else {
		printf("Erro ao alocar memoria.");
		system("pause");
	}
}

void inserir_meio(Lista *lista, aluno dados, char *ant){
	no *aux, *novo = malloc(sizeof(no));
	if (novo) {
		novo->al = dados;
		if (lista->inicio == NULL){
			novo->proximo = NULL;
			lista->inicio = novo;
		} else {
			aux = lista->inicio;
			while(aux->proximo && strcmp(aux->proximo->al.p.nome, ant) != 0){
				aux = aux->proximo;
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
		lista->tam++;	
	} else {
		printf("Erro ao alocar memoria.");
		system("pause");
	}
}

void inserir_ordenado(Lista *lista, aluno dados){
	no *aux, *novo = malloc(sizeof(no));
	if (novo) {
		novo->al = dados;
		if (lista->inicio == NULL || strcmp(lista->inicio->al.p.nome, dados.p.nome) > 0){
			novo->proximo = lista->inicio;
			lista->inicio = novo;
		} else {
			aux=lista->inicio;
			while(aux->proximo && strcmp(aux->proximo->al.p.nome, dados.p.nome) <=0){
				aux=aux->proximo;
			}
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
		lista->tam++;
	} else {
		printf("Erro ao alocar memoria.");
		system("pause");
	}
}

no* remover(Lista *lista, char *nome){
	no *aux, *removido = NULL;
	if (lista->inicio){
		if(strcmp(lista->inicio->al.p.nome, nome) ==0){
			removido = lista->inicio;
			lista->inicio = removido->proximo;
			lista->tam--;
		} else {
			aux = lista->inicio;
			while(aux->proximo&&strcmp(aux->proximo->al.p.nome, nome) !=0){
				aux = aux->proximo;
			}
			if(aux->proximo) {
				removido = aux->proximo;
				aux->proximo = removido->proximo;
				lista->tam--;
			}
		}
	}
	return removido;
}

void imprimir(Lista lista){
	no *aux = lista.inicio;
	printf("\nTamanho da lista: %d\n", lista.tam);
	while(aux){
		mostra_dados(aux);
		aux = aux->proximo;
	}
	system("pause");
}

void mostra_dados(no *dados){
	printf("Nome: %s\n", dados->al.p.nome);
	printf("RA: %s\n", dados->al.ra);
	printf("CPF: %s\n", dados->al.p.cpf);
	printf("RG: %s\n", dados->al.p.rg);
	printf("Curso %s\n", dados->al.curso);
	printf("\n");
}








