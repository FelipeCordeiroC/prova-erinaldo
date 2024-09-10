#include <stdio.h>
//10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
//da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
//alíquotas progressivas para calcular o valor da contribuição:



double calculoINSS(double salario_bruto) {
    double contribuicao;

    
    if (salario_bruto <= 1320.00) {
        contribuicao = salario_bruto * 0.075;
    } else if (salario_bruto <= 2571.29) {
    
        contribuicao = 1320.00 * 0.075 + (salario_bruto - 1320.00) * 0.09;
    } else if (salario_bruto <= 3856.94) {
        
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (salario_bruto - 2571.29) * 0.12;
    } else if (salario_bruto <= 7507.49) {
        
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (salario_bruto - 3856.94) * 0.14;
    } else {
        
        contribuicao = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (7507.49 - 3856.94) * 0.14;
    }

    
    return contribuicao;
}

int main() {
    double salario_bruto, contribuicao;

    
    printf("Digite o salário bruto: R$ ");
    scanf("%lf", &salario_bruto);

    
    contribuicao = calculoINSS(salario_bruto);

    
    printf("O valor da contribuição ao INSS é: R$ %.2lf\n", contribuicao);

    return 0;
}
