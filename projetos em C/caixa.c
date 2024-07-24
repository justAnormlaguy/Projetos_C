#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
	
	int notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0;
    int valor_saque;
	
	printf("Digite o valor que deseja sacar: ");
    scanf("%i", &valor_saque);

    int valor_restante = valor_saque;

    while (valor_restante >= 50 && notas_50 < 10) {
        valor_restante -= 50;
        notas_50++;
    }

    while (valor_restante >= 20 && notas_20 < 20) {
        valor_restante -= 20;
        notas_20++;
    }

    while (valor_restante >= 10 && notas_10 < 30) {
        valor_restante -= 10;
        notas_10++;
    }

    while (valor_restante >= 5 && notas_5 < 50) {
        valor_restante -= 5;
        notas_5++;
    }

    if (valor_restante == 0) {
        printf("Notas de R$ 50,00: %i.\n", notas_50); 
        printf("Notas de R$ 20,00: %i.\n", notas_20); 
        printf("Notas de R$ 10,00: %i.\n", notas_10); 
        printf("Notas de R$ 5,00: %i", notas_5);
    } else {
        printf("Não é possível realizar o saque com as notas disponíveis.");
    }

    return 0;
}

