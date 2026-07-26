#include <stdio.h>

int maior(int v[], int n) {
    if (n == 1)
        return v[0];

    int m = maior(v, n - 1);

    if (v[n - 1] > m)
        return v[n - 1];

    return m;
}

int main() {
    int v[5];
    int i;

    printf("Digite 5 numeros:\n");

    for (i = 0; i < 5; i++)
        scanf("%d", &v[i]);

    printf("Maior = %d\n", maior(v, 5));

    return 0;
}