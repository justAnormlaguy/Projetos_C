#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, n4, n5, n6, result;
	char soma, subtracao, divisao, multiplicacao, operac;
	
	printf("selecione o tipo da operação, nós temos: +,-,*,/: ");
	scanf("%c", &operac);

//	tava duplicando o printf, ñ entendi o pq e n consegui ver isso, o jeito q ta ali funciona mas é bem "gambiarra"
//	while(operac != '+', operac != '-', operac != '*', operac != '/'){
//		printf("selecione o tipo da operação, nós temos: +,-,*,/: \n");
//		scanf("%c", &operac);
//	}

	while(operac != '+', operac != '-', operac != '*', operac != '/'){
		
		scanf("%c", &operac);
	}
		
	printf("você escolheu esse operador %c \n", operac);
	printf("agora vamos elcolher os operandos \n");
	printf("digite o operando 1: ");
	scanf("%f", &n1);
	
	printf("digite o operando 2:");
	scanf("%f", &n2);
	
	if (operac=='+'){
		result = n1 + n2;
		printf("O resultado da operação foi: %f", result);
	}else if(operac=='-'){
		result = n1 - n2;
		printf("O resultado da operação foi: %f", result);
	}else if(operac=='*'){
		result = n1 * n2;
		printf("O resultado da operação foi: %f", result);
	}else if(operac=='/'){
		result = n1 / n2;
		printf("O resultado da operação foi: %f", result);
	}
}
