#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[50];
	float nota1, nota2;
} aluno;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	aluno a1, a2, a3;
	
	printf("Aluno 1.\n");
	printf("Digite seu nome: ");
	scanf("%s", a1.nome);
	printf("Digite sua 1° nota: ");
	scanf("%f", &a1.nota1);
	printf("Digite sua 2° nota: ");
	scanf("%f", &a1.nota2);
	
	printf("\nAluno 2.\n");
	printf("Digite seu nome: ");
	scanf("%s", a2.nome);
	printf("Digite sua 1° nota: ");
	scanf("%f", &a2.nota1);
	printf("Digite sua 2° nota: ");
	scanf("%f", &a2.nota2);
	
	printf("\nAluno 3.\n");
	printf("Digite seu nome: ");
	scanf("%s", &a3.nome);
	printf("Digite sua 1° nota: ");
	scanf("%f", &a3.nota1);
	printf("Digite sua 2° nota: ");
	scanf("%f", &a3.nota2);
	
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
	
	return 0;
}
