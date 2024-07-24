#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char nome[50];
	float nota1, nota2;
} aluno;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int escolha=0, verifica=0;
	aluno a1, a2, a3;
	
	do{
	printf("Informe qual aluno é você.\n");
	printf("Aluno 01, digite: 1\n");
	printf("Aluno 02, digite: 2\n");
	printf("Aluno 03, digite: 3\n");
	scanf("%d", &escolha);
	switch(escolha){
		case 1:
		printf("Digite o seu nome: ");
		scanf("%s", a1.nome);
		printf("Digite sua 1° nota: ");
		scanf("%f", &a1.nota1);
		printf("Digite sua 2° nota: ");
		scanf("%f", &a1.nota2);
		system("cls");
		break;
		verifica += 1;
		case 2:
		printf("Digite o seu nome: ");
		scanf("%s", a2.nome);
		printf("Digite sua 1° nota: ");
		scanf("%f", &a2.nota1);
		printf("Digite sua 2° nota: ");
		scanf("%f", &a2.nota2);
		verifica += 1;
		system("cls");
		break;
		case 3:
		printf("Digite o seu nome: ");
		scanf("%s", a3.nome);
		printf("Digite sua 1° nota: ");
		scanf("%f", &a3.nota1);
		printf("Digite sua 2° nota: ");
		scanf("%f", &a3.nota2);
		verifica += 1;
		system("cls");
		break;
		default:
		printf("Erro! Valor inválido!");
		system("pause");	
	}
	}while(verifica != 3);
	
	
	printf("funcionou");
	return 0;
}
