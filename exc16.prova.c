#include <stdio.h>

// Função para classificar o desempenho acadêmico
void classificarDesempenho(float nota) {
    if (nota >= 9.0 && nota <= 10.0) {
        printf("Classificação: A\n");
    } else if (nota >= 7.0 && nota < 9.0) {
        printf("Classificação: B\n");
    } else if (nota >= 5.0 && nota < 7.0) {
        printf("Classificação: C\n");
    } else if (nota < 5.0 && nota >= 0.0) {
        printf("Classificação: D\n");
    } else {
        printf("Erro: Nota fora do intervalo permitido (0 a 10).\n");
    }
}

int main() {
    float nota;

    
    printf("Digite a nota final do aluno (0 a 10): ");
    scanf("%f", &nota);
    
    classificarDesempenho(nota);

    return 0;
}
