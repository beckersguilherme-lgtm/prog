#include <stdio.h>

int main() {
    int baixo = 1;
    int alto = 100;
    int meio;
    int resposta;
    int tentativas = 0;

    printf("Pense em um numero entre 1 e 100.\n");

    while (baixo <= alto) {
        meio = (baixo + alto) / 2;
        tentativas++;

        printf("\nO numero e %d?\n", meio);
        printf("1 - Sim\n");
        printf("2 - Maior\n");
        printf("3 - Menor\n");
        scanf("%d", &resposta);

        if (resposta == 1) {
            printf("Acertei em %d palpites!\n", tentativas);
            break;
        }

        if (resposta == 2)
            baixo = meio + 1;
        else
            alto = meio - 1;
    }

    return 0;
}