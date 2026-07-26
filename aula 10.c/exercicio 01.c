#include <stdio.h>

int buscaLinear(int v[], int n, int alvo, int *comparacoes) {
    int i;

    *comparacoes = 0;

    for (i = 0; i < n; i++) {
        (*comparacoes)++;

        if (v[i] == alvo)
            return i;
    }

    return -1;
}

int buscaBinaria(int v[], int n, int alvo, int *comparacoes) {
    int baixo = 0;
    int alto = n - 1;

    *comparacoes = 0;

    while (baixo <= alto) {
        int meio = (baixo + alto) / 2;

        (*comparacoes)++;

        if (v[meio] == alvo)
            return meio;

        if (v[meio] < alvo)
            baixo = meio + 1;
        else
            alto = meio - 1;
    }

    return -1;
}

int main() {
    int v[30];
    int i;
    int alvo;
    int compLinear;
    int compBinaria;

    for (i = 0; i < 30; i++)
        v[i] = i + 1;

    alvo = 30;

    buscaLinear(v, 30, alvo, &compLinear);
    buscaBinaria(v, 30, alvo, &compBinaria);

    printf("Comparacoes busca linear: %d\n", compLinear);
    printf("Comparacoes busca binaria: %d\n", compBinaria);

    return 0;
}