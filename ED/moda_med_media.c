#include <stdio.h>
#include <stdlib.h>

// Função para calcular a moda
void calcularModa(int v[], int tamanho) {
    int cont[tamanho]; // Array para contar a frequência de cada valor
    int moda = -1; // Valor da moda
    int maxContagem = 0; // Contagem máxima
	int i;
    for ( i = 0; i < tamanho; i++) {
        cont[i] = 0; // Inicializa o contador para cada valor
    }

    for ( i = 0; i < tamanho; i++) {
        cont[v[i]]++; // Incrementa a contagem para o valor atual
        if (cont[v[i]] > maxContagem) {
            maxContagem = cont[v[i]];
            moda = v[i];
        }
    }

    printf("Moda: %d\n", moda);
}

// Função para calcular a média
float calcularMedia(int v[], int tamanho) {
    float soma = 0;
    int i;
    for ( i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma / tamanho;
}

// Função para calcular a mediana
float calcularMediana(int v[], int tamanho) {
    int meio = tamanho / 2;
    if (tamanho % 2 == 0) {
        return (v[meio - 1] + v[meio]) / 2.0;
    } else {
        return v[meio];
    }
}

int main() {
    int tamanho;
    printf("Quantos números deseja inserir? ");
    scanf("%d", &tamanho);

    int v[tamanho];
    int i;
    for ( i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    calcularModa(v, tamanho);
    printf("Média: %.2f\n", calcularMedia(v, tamanho));
    printf("Mediana: %.2f\n", calcularMediana(v, tamanho));

    return 0;
}

