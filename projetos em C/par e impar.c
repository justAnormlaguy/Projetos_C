#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, resul;
	char modo;
	
	printf("Informe um n�mero inteiro:");
	scanf("%i", &num);
	
	resul = num % 2; 
	
	if (resul == 0){
		modo = 'A';
	} else {
		modo = 'B';
	}
	
	switch(modo){
		case 'A':
			printf("O n�mero informado � par.");
			break;
		case 'B':
			printf("O n�mero informado � impar.");
			break;	
	}
	
}
