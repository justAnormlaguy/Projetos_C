#include <stdlib.h>
#include <stdio.h>

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

typedef struct apelido_no{
  aluno al;
  struct apelido_no *proximo;
}no;

no *frente = NULL;
no *fim = NULL;

void enqueue(aluno a); 
void dequeue();     
void imprimir();
aluno entrada_dados();

int main(){
  int opcao;
  aluno dados;
  
  do{  
    system("cls");
    printf("\n\nMenu\n1. Enfileirar \n2. Desenfileirar\n3. Imprimir \n4. Sair");
    printf("\nEscolha uma opcao (0-4): ");
    scanf("%d",&opcao);
    switch (opcao){
      case 1:
        dados=entrada_dados();
        enqueue(dados); 
        break;
      case 2:
        dequeue(); 
        break;
      case 3:
        imprimir();
        break;          
    }
  }while (opcao!=4);
  
  system("pause");
  
  return 0;
  }
  
void enqueue(aluno dados){
	printf("\nPROCESSO EM ANDAMENTO...\n");
	no *novo = malloc(sizeof(no));
	novo->al = dados;
	novo->proximo = NULL;
	if (fim == NULL){
		frente = novo;
		fim = novo;
	} else {
		fim->proximo = novo;
		fim = novo;
	}
	printf("\nPROCESSO CONCLUIDO\n", novo->al);
	system("pause");
}
  
void dequeue(){
	printf("\nPROCESSO EM ANDAMENTO\n");
	if (frente == NULL)
		printf("Fila vazia.");
	 else {
		no *temp = frente;
		frente = frente -> proximo;
		if (frente == NULL)
			fim = NULL;
			printf("\nPROCESSO CONCLUIDO.\n", temp->al);
			free(temp);
	}
	system("pause");
}
  
void imprimir(){
	no *temp = frente;
	printf("\nIMPRIMINDO A FILA...\n");
	while (temp != NULL){
		printf(" Nome: %s\n CPF: %s\n RG: %s\n RA: %s\n Curso: %s\n", temp->al.p.nome,temp->al.p.cpf,temp->al.p.rg,temp->al.ra,temp->al.curso);
		temp = temp->proximo;
	}
	system("pause");
}
  
aluno entrada_dados(){
  aluno a;
  printf("\nEntre com valor a empilhar: \n");
  printf(" Nome: "); scanf("%s",&a.p.nome);
  printf("  CPF: "); scanf("%s",&a.p.cpf);
  printf("   RG: "); scanf("%s",&a.p.rg);
  printf("   RA: "); scanf("%s",&a.ra);
  printf("Curso: "); scanf("%s",&a.curso);
  return a;
}
  
  
  
