#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.c>

int x;
char c;
// menu principal/////////////////////////////////////////////////////////////////////////////////////
void menu() {
	system("cls");
	printf("\n\n\t\t\t\t\t|'''''''''''''''''''''''''|");
	printf("\n\t\t\t\t\t|--------QUIZ GAME--------|");
	printf("\n\t\t\t\t\t|_________________________|");
	printf("\n\n\t\t\t\t\t\t MENU");
	printf("\n\t\t\t\t\t  APERTE 1: PARA COMEÇAR");
	printf("\n\t\t\t\t\t  APERTE 2: PARA OPÇÕES");
	printf("\n\t\t\t\t\t  APERTE 3: PARA CRÉDITOS");
	printf("\n\t\t\t\t\t  APERTE 0: PARA SAIR");
	printf("\n\t\t\t\t\t  DIGITE A OPÇÃO DESEJADA: ");
}

void loading(){
	//_setcursortype(_NORMALCURSOR);
    _setcursortype(_NOCURSOR); //para esconder o cursor
    textcolor(15);
    gotoxy(40,12);
    printf("0%%");
    for (x=10; x<=50; x++)
       	printf("%c",32);
    	printf("100%%");
	

    for (x=42; x<=82; x++){
       gotoxy(x,12);
       printf("%c",35);
       Sleep(50);        
    } 
    printf("\n");
    gotoxy(8,15);
    printf("\n\t\t\t\t\t\tPressione ENTER para continuar");
    c=getch();
    _setcursortype(_NORMALCURSOR); //para voltar o cursor
}

//menu dos créditos////////////////////////////////////////////////////////////////////////////////////
void menu_credito(){
	int select_menu;
	system("cls");
		printf("\n\t\t\t\t\t\tCRÉDITOS\n");
		printf("\n\t\t\t\t\t\t*ALUNOS*\n");
		printf("\n\t\t\t\tLUCAS DE OLIVEIRA LIMA RA: 23000810-2");
		printf("\n\t\t\t\tALEXANDRE LOZANO DE SOUZA RA: 23003803-2");
		printf("\n\t\t\t\tGABRIEL DO NASCIMENTO CANO ANDRADE RA: 23000555-2");
		printf("\n\n\t\t\t\t\t0. VOLTAR\n");
		printf("\n\t\t\t\t\tDIGITE A OPÇÃO DESEJADA: ");
		scanf("%i", &select_menu);
	switch(select_menu){
			case 0:
				system("cls");
				break;		
		}
}

//menu das opções//////////////////////////////////////////////////////////////////////////////////
void menu_opcao() {
	int select_menu;
	system("cls");
	printf("\n\t\t\t\t\tOPÇÕES");
	printf("\n\t\t\t\t\tDIGITE 1: PARA COR");
	printf("\n\t\t\t\t\tDIGITE 2: PARA REGRAS");
	printf("\n\t\t\t\t\tDIGITE 0: PARA VOLTAR");
	printf("\n\t\t\t\t\tDIGITE A OPÇÃO DESEJADA: ");
	scanf("%i", &select_menu);
	switch(select_menu){
		case 0:
			system("cls");
			break;
	}
//regras////////////////////////////////////////////////////////////////////////////////	
	if (select_menu == 2) {
		system("cls");
		printf("\n\t\t\t\t1. VOCÊ PODE JOGAR APENAS UM QUIZ POR VEZ.");
		printf("\n\t\t\t\t2. CADA NIVEL CONTÉM 5 PERGUNTAS.");
		printf("\n\t\t\t\t3. CADA QUESTÃO TEM 4 OPÇÕES.");
		printf("\n\t\t\t\t4. CADA RESPOSTA CORRETA VALE 1 PONTO.");
		printf("\n\t\t\t\t5. RESPOSTAS ERRADAS NÃO DÃO PONTOS.");
		printf("\n\t\t\t\t6. NO FINAL DE CADA QUIZ HAVERÁ UM GABARITO");
		printf("\n\t\t\t\t7. AO FINAL DE CADA QUIZ VOCÊ VERA SUA PONTUAÇÃO.");
		printf("\n\n\t\t\t\t\tDIGITE 0: PARA VOLTAR ");
		printf("\n\n\t\t\t\t\tDIGITE A OPÇÃO DESEJADA: ");
		scanf("%i", &select_menu);
		switch(select_menu){
			case 0:
				system("cls");
				break;		
		}
	} 
//cor////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	if (select_menu == 1) {
		system("cls");
		printf("\n\t\t\t\t\tSELECIONE A COR DESEJADA");
		printf("\n\t\t\t\t\tDIGITE 1: PARA VERDE COM PRETO");
		printf("\n\t\t\t\t\tDIGITE 2: PARA ROXO COM PRETO");
		printf("\n\t\t\t\t\tDIGITE 3: PARA COR PADRÃO");
		printf("\n\t\t\t\t\tDIGITE 0: PARA VOLTAR\n");
		printf("\n\t\t\t\t\tDIGITE A OPÇÃO DESEJADA: ");
		scanf("%i", &select_menu);
		switch(select_menu){
			case 1: 
				system("color 0a");
				system("cls");
				break;
			case 2:
				system("color 0d");
				system("cls");
				break;
			case 3: 
				system("color 07");
				system("cls");
				break;
			case 0:
				system("cls");
				break;		
		}	
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//selecionar menus
int opcao() {
	int op, valido = 0;
	while (valido == 0){
	scanf("%i", &op);	
		switch (op){
			case 1:
			case 2:
			case 3:
			case 0:
				valido = 1;
				return op;				
		}	
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
void nivel(){
	int selec_nivel;
	system("cls");
	printf("\n\t\t\t\t\t|-------TEMA MATEMÁTICA-------|");
	printf("\n\t\t\t\t\t|'''''''''''''''''''''''''''''|");
	printf("\n\t\t\t\t\t|------ESCOLHA UM NÍVEL-------|");
	printf("\n\t\t\t\t\t|_____________________________|");
	printf("\n\n");
	printf("\t\t\t\t\tDIGITE 1: PARA NÍVEL FÁCIL.");
	printf("\n\t\t\t\t\tDIGITE 2: PARA NÍVEL MÉDIO.");
	printf("\n\t\t\t\t\tDIGITE 3: PARA NÍVEL DIFÍCIL.");
	printf("\n\n\t\t\t\t\tDIGITE 0: PARA VOLTAR.");
	printf("\n\n\t\t\t\t\tDIGITE A OPÇÃO DESEJADA: ");
	scanf("%i", &selec_nivel);		
	switch(selec_nivel){
		case 1:
			system("cls");
			mat_basic();
			break;
		case 2:
			system("cls");
			mat_niv2();
			break;	
		case 3:
			system("cls");
			mat_niv3();
			break;	
	}
	
}
//questoes/////////////////////////////////////////////////////////////////////////////////////////
int mat_basic(){

	char perguntas[][150] = {"1. RESOLVA 5-5*2+11  ",
							 "2. RESOLVA 8+4(2-5)  ",
							 "3. RESOLVA 30-10*2-4 ",
							 "4. RESOLVA 5-5*2+3*2 ",
							 "5. RESOLVA 6/6/6/6   "}; 
							 
	char opcoes[][150] = {"1). 0!", "2). 1!", "3). 2!", "4). 3!",
						  "1). -4", "2). 4", "3). -36", "4). 36",
						  "1). 6!", "2). 36", "3). 24", "4). 3!",
						  "1). 1", "2). 6", "3). 11", "4). 12",
						  "1). 6", "2). 16", "3). 36", "4). 6^-2",};
							
	int respostas[5] = {4, 1, 4, 4, 4};

	int numdequestoes = sizeof(perguntas)/sizeof(perguntas[0]);
	int resposta_user, score, cont, cont2, menu;
	
	for (cont = 0; cont < numdequestoes; cont++) {
		
		printf("\n\t\t\t\t\t%s", perguntas[cont]);
		for (cont2 = (cont * 4); cont2 < (cont * 4) + 4; cont2++) {
			printf("\n\t\t\t\t\t%s", opcoes[cont2]);	
		}
		
		printf("\n\n\t\t\t\t\tDIGITE A RESPOSTA: ");
		scanf("%i", &resposta_user);
		
		if (resposta_user == respostas[cont]) {
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\t\t\t\t\t\t|----ACERTOU----|");
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\n");
			score++;
		} else {
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\t\t\t\t\t\t|-----ERROU-----|");
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\n");
		}
		
	}
	system("cls");
	loading();
	system("cls");
	printf("\n\t\t\t\t\t\t|----------------|");
	printf("\n\t\t\t\t\t\t|----GABARITO----|");
	printf("\n\t\t\t\t\t\t|----------------|\n");
	printf("\n\t\t\t\t\t\tVOCÊ ACERTOU %d/%d QUESTÕES.", score, numdequestoes);
	
	for (cont = 0; cont < 5; cont++) {
		printf("\n\t\t\t\t\tQUESTÃO %i) ", cont+1);
		printf("\n\t\t\t\t\t%i", respostas[cont]);
	}
	
	printf("\n\t\t\t\t\tPONTUAÇÃO: %i\n", score);
	
	if (score == numdequestoes) {
		printf("\n\t\t\t\t\tPARABÉNS VOCÊ CONSEGUIU ACERTAR TODAS!!!");
	} else {
		printf("\n\t\t\t\t\tFOI QUASE! ESTUDE MAIS E TENTE NOVAMENTE.");
	}
	
	printf("\n\n\t\t\t\t\tDIGITE 0: PARA VOLTAR.");
	scanf("%i", &menu);	
	while (menu != 0){
		scanf("%i", &menu);
		switch (menu) {
			case 0:
				system("cls");
				nivel();
				break;
		}
	}
	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int mat_niv2(){

	char perguntas[][150] = {"1. RESOLVA 5(X - 1) + 3(X + 1) = 30",
							 "2. RESOLVA 5 + 3(X + 5) = X - 1",
							 "3. RESOLVA 3(X + 3) - 2(2X + 3) = 8(X - 3)",
							 "4. RESOLVA X - 1 = 5X + 10 ",
							 "5. RESOLVA 4(X - 1)(X + 4) - (X + 2)(X + 4) = 3(X + 2)(X - 1)"}; 
							 
	char opcoes[][150] = {"1). 5", "2). 4", "3). 10", "4). -4",
						  "1). 21/-2", "2). 8/4", "3). 1/4", "4). 2",
						  "1). 6", "2). 3", "3). 4", "4). 13",
						  "1). 1", "2). -1/4", "3). 12/16", "4). -(11/4)",
						  "1). 6", "2). 5", "3). 63", "4). 24",};
							
	int respostas[5] = {2, 1, 2, 4, 1};

	int numdequestoes = sizeof(perguntas)/sizeof(perguntas[0]);
	int resposta_user, score, cont, cont2, menu;
	
	for (cont = 0; cont < numdequestoes; cont++) {
		
		printf("\n\t\t\t\t\t%s", perguntas[cont]);
		for (cont2 = (cont * 4); cont2 < (cont * 4) + 4; cont2++) {
			printf("\n\t\t\t\t\t%s", opcoes[cont2]);	
		}
		
		printf("\n\n\t\t\t\t\tDIGITE A RESPOSTA: ");
		scanf("%i", &resposta_user);
		
		if (resposta_user == respostas[cont]) {
			printf("\n\t\t\t\t\t\t|---------------|") ;
			printf("\n\t\t\t\t\t\t|----ACERTOU----|");
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\n");
			score++;
		} else {
			printf("\n\t\t\t\t\t\t|---------------|") ;
			printf("\n\t\t\t\t\t\t|-----ERROU-----|");
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\n");
		}
		
	}
	
	system("cls");
	loading();
	system("cls");
	printf("\n\t\t\t\t\t\t|----------------|");
	printf("\n\t\t\t\t\t\t|----GABARITO----|");
	printf("\n\t\t\t\t\t\t|----------------|\n");
	printf("\n\t\t\t\t\t\tVOCÊ ACERTOU %d/%d QUESTÕES.", score, numdequestoes);
	
	for (cont = 0; cont < 5; cont++) {
		printf("\n\t\t\t\t\tQUESTÃO %i) ", cont+1);
		printf("\n\t\t\t\t\t%i", respostas[cont]);
	}
	
	printf("\n\t\t\t\t\tPONTUAÇÃO: %i\n", score);
	
	if (score == numdequestoes) {
		printf("\n\t\t\t\t\tPARABÉNS VOCÊ CONSEGUIU ACERTAR TODAS!!!");
	} else {
		printf("\n\t\t\t\t\tFOI QUASE! ESTUDE MAIS E TENTE NOVAMENTE.");
	}
	printf("\n\n\t\t\t\t\tDIGITE 0: PARA VOLTAR.");
	scanf("%i", &menu);	
	while (menu != 0){
		scanf("%i", &menu);
		switch (menu) {
			case 0:
				system("cls");
				nivel();
				break;
		}
	}
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////	
int mat_niv3(){

	char perguntas[][150] = {"1. A soma das raízes da equação x^3 - 7x^2 + 12x = 0 é: ",
							 "2. A soma das raízes da equação x^4 + 5x^3 - 3x^2 - 15x = 0 é: ",
							 "3. A soma dos quadrados das raízes da equação (3x - 1)(3x^2 - 2x - 1) = 0 é: ",
							 "4. A soma das raízes da equação x^3 - 4x = 0 é: ",
							 "5. A soma dos cubos das raízes da equação x^3 - 2x^2 + 3x + 1 = 0 é: "}; 
							 
	char opcoes[][150] = {"1). 7", "2). 3", "3). 4", "4). 8",
						  "1). -1", "2). -2", "3). -3", "4). -5",
						  "1). 0", "2). 1/9", "3). 2/3", "4). 11/9",
						  "1). -2", "2). 0", "3). 5", "4). 3",
						  "1). 12", "2). -12", "3). -13", "4). 13",};
							
	int respostas[5] = {1, 4, 4, 2, 3};

	int numdequestoes = sizeof(perguntas)/sizeof(perguntas[0]);
	int resposta_user, score, cont, cont2, menu;
	
	for (cont = 0; cont < numdequestoes; cont++) {
		
		printf("\n\t\t\t\t\t%s", perguntas[cont]);
		for (cont2 = (cont * 4); cont2 < (cont * 4) + 4; cont2++) {
			printf("\n\t\t\t\t\t%s", opcoes[cont2]);	
		}
		
		printf("\n\n\t\t\t\t\tDIGITE A RESPOSTA: ");
		scanf("%i", &resposta_user);
		
		if (resposta_user == respostas[cont]) {
			printf("\n\t\t\t\t\t\t|---------------|") ;
			printf("\n\t\t\t\t\t\t|----ACERTOU----|");
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\n");
			score++;
		} else {
			printf("\n\t\t\t\t\t\t|---------------|") ;
			printf("\n\t\t\t\t\t\t|-----ERROU-----|");
			printf("\n\t\t\t\t\t\t|---------------|");
			printf("\n\n");
		}
		
	}
	
	system("cls");
	loading();
	system("cls");
	printf("\n\t\t\t\t\t\t|----------------|");
	printf("\n\t\t\t\t\t\t|----GABARITO----|");
	printf("\n\t\t\t\t\t\t|----------------|\n");
	printf("\n\t\t\t\t\t\tVOCÊ ACERTOU %d/%d QUESTÕES.", score, numdequestoes);
	
	for (cont = 0; cont < 5; cont++) {
		printf("\n\t\t\t\t\tQUESTÃO %i) ", cont+1);
		printf("\n\t\t\t\t\t%i", respostas[cont]);
	}
	
	printf("\n\t\t\t\t\tPONTUAÇÃO: %i\n", score);
	
	if (score == numdequestoes) {
		printf("\n\t\t\t\t\tPARABÉNS VOCÊ CONSEGUIU ACERTAR TODAS!!!");
	} else {
		printf("\n\t\t\t\t\tFOI QUASE! ESTUDE MAIS E TENTE NOVAMENTE.");
	}
	printf("\n\n\t\t\t\t\tDIGITE 0: PARA VOLTAR.");
	scanf("%i", &menu);	
	while (menu != 0){
		scanf("%i", &menu);
		switch (menu) {
			case 0:
				system("cls");
				nivel();
				system("cls");
				break;
		}
	}
	}
///////////////////////////////////////////////////////////////////////////////////////////////	
int main(){
	system("MODE CON cols=110 lines=30"); // tamanho da tela cols = coluna / lines = linhas
	setlocale(LC_ALL, "Portuguese"); // linguagem pt-br
	
	int select_menu, selec_tema, op = 5, score;
	
	loading();
	while (op != 0){
		menu();
		op = opcao();
		switch(op){
			case 1:
				nivel();
				break;
			case 2:
				menu_opcao();
				break;
			case 3:
				menu_credito();
				break;				
		}
	}
	
	return 0;
}
