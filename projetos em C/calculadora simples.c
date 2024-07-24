#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, resul;
	char conc, oper, i = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);
	printf("Informe o operador, /; *; -; +: ");
	scanf("%s", &oper);

	while (i == 4){
		printf("Informe o operador:");
		scanf("%s", &oper);
	}

//	while(oper != '/', oper != '-', oper != '*', oper != '+'){
//		
//		scanf("%s", &oper);
//	}
//	
//	while (oper != '+'){
//		printf("Informe o operador correto.\n");
//		scanf("%c", &oper);
//	}
//	while (oper != '*'){
//		printf("Informe o operador correto.\n");
//		scanf("%c", &oper);
//	}
//	while (oper != '-'){
//		printf("Informe o operador correto.\n");
//		scanf("%c", &oper);
//	}
//	while (oper != '/'){
//		printf("Informe o operador correto.\n");
//		scanf("%c", &oper);
//	}
	
	if (oper == '/'){
		printf("Você escolheu divisão.");
		conc  = 'A';
	} else if (oper == '*'){
		printf("Você escolheu multiplicação.");
		conc = 'B';
	} else if (oper == '-'){
		printf("Você escolheu subtração.");
		conc = 'C';
	} else {
		printf("Você escolheu adição.");
		conc = 'D';
	}
	
	switch(conc){
		case 'A':
			resul = n1 / n2;
			printf("O resultado da divisão é: %2.2f", resul);
			break;
		case 'B':
			resul = n1 * n2;
			printf("O resultado da multiplicação é: %2.2f", resul);
			break;
		case 'C':
			resul = n1 - n2;
			printf("O resultado da subtração é: %2.2f", resul);
			break;
		case 'D':
			resul = n1 + n2;
			printf("O resultado da adição é: %2.2f", resul);
			break;			
	}
}
