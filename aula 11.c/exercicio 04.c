#include <stdio.h>
#include <stdlib.h>

long compQS = 0;
long compSS = 0;

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        compQS++;

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

void selectionSort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor = i;

        for (int j = i + 1; j < n; j++) {
            compSS++;

            if (v[j] < v[menor])
                menor = j;
        }

        int temp = v[i];
        v[i] = v[menor];
        v[menor] = temp;
    }
}

int main() {
    int a[1000];
    int b[1000];

    for (int i = 0; i < 1000; i++) {
        int r = rand() % 10000;
        a[i] = r;
        b[i] = r;
    }

    quicksort(a, 0, 999);
    selectionSort(b, 1000);

    printf("Comparacoes Quicksort: %ld\n", compQS);
    printf("Comparacoes Selection Sort: %ld\n", compSS);

    return 0;
}