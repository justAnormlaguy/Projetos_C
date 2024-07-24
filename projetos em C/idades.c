#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char conc;
	
	printf("Informe sua idade por favor: ");
	scanf("%i", &idade);
	
	while (idade > 100 || idade < 0){
		printf("Informe sua idade por favor: ");
		scanf("%i", &idade);
	}
	
	if (idade < 12 && idade > 0){
		conc = 'A';
	} else if (idade > 12 && idade < 18){
		conc = 'B';
	} else if (idade > 19 && idade < 59){
		conc = 'C';
	} else {
		conc = 'D';
	}
	
	switch(conc){
		case 'A':
			printf("Você é uma criança!");
			break;
		case 'B':
			printf("Você é um adolescente!");
			break;
		case 'C':
			printf("Você é um adulto!");
			break;
		case 'D':
			printf("Você é um idoso!");
			break;				
	}
}
