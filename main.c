#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int dist_menor = 0;

int calcular_distancia(int vet[], int limite, int cont) {
    int distancia;

    if (limite <= 0)
        return 0;

    distancia = vet[cont + 1] - vet[cont];

    printf("Distância entre %d e %d = \t%d cm\n", cont + 1, cont + 2, distancia);

    if (dist_menor == 0) {
        dist_menor = distancia;
    } else {
        if (dist_menor > distancia) {
            dist_menor = distancia;
        }
    }

    calcular_distancia(vet, limite - 1, cont + 1);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int vetor[17] = {3, 6, 9, 19, 25, 40, 43, 55, 58, 71, 73, 79, 82, 84, 90, 96, 100};

    calcular_distancia(vetor, 16, 0);

    printf("\nA menor distância é a de: %d cm\n", dist_menor);

    return 0;
}
