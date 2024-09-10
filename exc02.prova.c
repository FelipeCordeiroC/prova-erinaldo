#include <stdio.h>


void verificaBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("%d é um ano bissexto.\n", ano);
    }
}
int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    verificaBissexto(ano);

    return 0;
}
