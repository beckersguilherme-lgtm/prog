#include <stdio.h>

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j] <= pivo) {
            i++;

            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void quicksort(int v[], int inicio, int fim, int n) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);

        printf("Pivo na posicao %d: ", p);

        for (int i = 0; i < n; i++)
            printf("%d ", v[i]);

        printf("\n");

        quicksort(v, inicio, p - 1, n);
        quicksort(v, p + 1, fim, n);
    }
}

int main() {
    int v[] = {33, 15, 10, 45, 20, 8, 50};
    int n = 7;

    quicksort(v, 0, n - 1, n);

    return 0;
}