#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int particionar(Aluno v[], int inicio, int fim) {
    float pivo = v[fim].nota;
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j].nota >= pivo) {
            i++;

            Aluno temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    Aluno temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void quicksort(Aluno v[], int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(v, inicio, fim);

        quicksort(v, inicio, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {
    Aluno turma[4] = {
        {"Ana", 7.5},
        {"Bruno", 9.0},
        {"Carla", 6.0},
        {"Davi", 8.5}
    };

    quicksort(turma, 0, 3);

    printf("Ranking:\n");

    for (int i = 0; i < 4; i++)
        printf("%d. %s %.1f\n", i + 1, turma[i].nome, turma[i].nota);

    return 0;
}