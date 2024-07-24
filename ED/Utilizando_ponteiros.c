#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[50];
	float nota1, nota2;
} aluno;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int *nome;
	float *nota1, *nota2;
	aluno a1, a2, a3;
	
	nome=&a1.nome;
	nota1=&a1.nota1;
	nota2=&a1.nota2;
	printf("Aluno 1.\n");
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua 1° nota: ");
	scanf("%f", nota1);
	printf("Digite sua 2° nota: ");
	scanf("%f", nota2);
	
	nome=&a2.nome;
	nota1=&a2.nota1;
	nota2=&a2.nota2;
	printf("\nAluno 2.\n");
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua 1° nota: ");
	scanf("%f", nota1);
	printf("Digite sua 2° nota: ");
	scanf("%f", nota2);
	
	nome=&a3.nome;
	nota1=&a3.nota1;
	nota2=&a3.nota2;
	printf("\nAluno 3.\n");
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite sua 1° nota: ");
	scanf("%f", nota1);
	printf("Digite sua 2° nota: ");
	scanf("%f", nota2);
	
	system("cls");
	printf("\nNome: %s", a1.nome);
	printf("\nNota 01: %2.2f", a1.nota1);
	printf("\nNota 02: %2.2f\n\n", a1.nota2);
	printf("\nNome: %s", a2.nome);
	printf("\nNota 01: %2.2f", a2.nota1);
	printf("\nNota 02: %2.2f\n\n", a2.nota2);
	printf("\nNome: %s", a3.nome);
	printf("\nNota 01: %2.2f", a3.nota1);
	printf("\nNota 02: %2.2f\n\n", a3.nota2);
}
