#include <stdio.h>

// Declaração da função
void verificaIdade(int idade);

int main() {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Chama a função para verificar a idade
    verificaIdade(idade);

    return 0;
}

void verificaIdade(int idade) {
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
}
