#include <stdio.h>

//7. Desenvolva uma função que receba um número inteiro e determine se ele é par
//ou ímpar. Exiba uma mensagem correspondente para cada caso.


void verificarParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("O numero %d é par.\n", numero);
    } else {
        printf("O numero %d é ímpar.\n", numero);
    }
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    verificarParOuImpar(numero);

    return 0;
}
