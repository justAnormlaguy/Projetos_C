#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float celsius, fahrenheit, conv;
	char modo;
	
	printf("Escolha qual conversão você quer fazer.\n");
	printf("Digite 1 para converter Celsius em Fahrenheit ou 2 para converter Fahrenheit para Celsius:\n");
	scanf("%f", &conv);

	if (conv == 1){
		modo = 'A';
	} else {
		modo = 'B';
	}
	
	switch(modo){
		case 'A':
			printf("Você escolheu a conversão de Celsius para Fahrenheit.\n");
			printf("Escolha o valor da temperatura: ");
			scanf("%f", &celsius);
			fahrenheit = (celsius * 1.8) + 32;
			printf("O valor da temperatura convertida é: %.2f", fahrenheit);
			break;
		case 'B':
			printf("Você escolheu a conversão de Fahrenheit para Celsius.\n");
			printf("Escolha o valor da temperatura: ");
			scanf("%f", &fahrenheit);
			celsius = (fahrenheit - 32) * 5/9;
			printf("O valor da temperatura convertida é: %.2f", celsius);
			break;	
	}
}
