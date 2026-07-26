#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0)
        return 0;

    return v[n - 1] + somaVetor(v, n - 1);
}

int main() {
    int v[5];
    int i;
    int soma = 0;

    printf("Digite 5 numeros:\n");

    for (i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    printf("Soma recursiva = %d\n", somaVetor(v, 5));

    for (i = 0; i < 5; i++)
        soma += v[i];

    printf("Soma com for = %d\n", soma);

    return 0;
}