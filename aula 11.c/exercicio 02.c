#include <stdio.h>

int comparacoes = 0;

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        comparacoes++;

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

void quicksort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);

        quicksort(v, inicio, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {
    int v[] = {5, 2, 9, 1, 7, 3, 8, 4, 6, 0};

    quicksort(v, 0, 9);

    printf("Comparacoes: %d\n", comparacoes);

    return 0;
}