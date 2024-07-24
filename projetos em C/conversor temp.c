#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float celsius, fahrenheit, conv;
	char modo;
	
	printf("Escolha qual convers�o voc� quer fazer.\n");
	printf("Digite 1 para converter Celsius em Fahrenheit ou 2 para converter Fahrenheit para Celsius:\n");
	scanf("%f", &conv);

	if (conv == 1){
		modo = 'A';
	} else {
		modo = 'B';
	}
	
	switch(modo){
		case 'A':
			printf("Voc� escolheu a convers�o de Celsius para Fahrenheit.\n");
			printf("Escolha o valor da temperatura: ");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 1.8) + 32;
			printf("O valor da temperatura convertida �: %.2f", fahrenheit);
			break;
		case 'B':
			printf("Voc� escolheu a convers�o de Fahrenheit para Celsius.\n");
			printf("Escolha o valor da temperatura: ");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5/9;
			printf("O valor da temperatura convertida �: %.2f", celsius);
			break;	
	}
}
