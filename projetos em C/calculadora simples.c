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
		printf("Voc� escolheu divis�o.");
		conc  = 'A';
	} else if (oper == '*'){
		printf("Voc� escolheu multiplica��o.");
		conc = 'B';
	} else if (oper == '-'){
		printf("Voc� escolheu subtra��o.");
		conc = 'C';
	} else {
		printf("Voc� escolheu adi��o.");
		conc = 'D';
	}
	
	switch(conc){
		case 'A':
			resul = n1 / n2;
			printf("O resultado da divis�o �: %2.2f", resul);
			break;
		case 'B':
			resul = n1 * n2;
			printf("O resultado da multiplica��o �: %2.2f", resul);
			break;
		case 'C':
			resul = n1 - n2;
			printf("O resultado da subtra��o �: %2.2f", resul);
			break;
		case 'D':
			resul = n1 + n2;
			printf("O resultado da adi��o �: %2.2f", resul);
			break;			
	}
}
