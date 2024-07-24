#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int dia;
	char modo;
	
	printf("Digite um número de 1 a 7: ");
	scanf("%i", &dia);
	
	while(dia > 7 || dia < 0){
		printf("Digite um número de 1 a 7: ");
		scanf("%i", &dia);
	}
	if (dia == 1){
		modo = 'A';
	} else if (dia == 2){
		modo = 'B';
	} else if (dia == 3){
		modo = 'C';
	} else if (dia == 4){
		modo = 'D';
	} else if (dia == 5){
		modo = 'E';
	} else if (dia == 6){
		modo = 'F';
	} else {
		modo = 'G';
	}
	
	switch(modo){
		case 'A':
			printf("Segunda-Feira");
			break;
		case 'B':
			printf("Terça-Feira");
			break;
		case 'C':
			printf("Quarta-feira");
			break;
		case 'D':
			printf("Quinta-feira");
			break;
		case 'E':
			printf("Sexta-feira");
			break;
		case 'F':
			printf("Sábado");
			break;
		case 'G':
			printf("Domingo");
			break;				
	}
}
