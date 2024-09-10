#include <stdio.h>
//9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
//Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
//Utilize as alíquotas e deduções conforme a tabela abaixo:


double calculoIRRF(double salario_bruto) {
    double imposto;

    
    if (salario_bruto <= 2112.00) {
        imposto = 0.0; 
    } else if (salario_bruto <= 2826.65) {
        imposto = salario_bruto * 0.075 - 158.40;
    } else if (salario_bruto <= 3751.05) {
        imposto = salario_bruto * 0.15 - 370.40;
    } else if (salario_bruto <= 4664.68) {
        imposto = salario_bruto * 0.225 - 651.73;
    } else {
        imposto = salario_bruto * 0.275 - 884.96;
    }


    return imposto;
}

int main() {
    double salario_bruto, imposto;

   
    printf("Digite o salário bruto: R$ ");
    scanf("%lf", &salario_bruto);

    
    imposto = calculoIRRF(salario_bruto);

    
    printf("O valor do IRRF é: R$ %.2lf\n", imposto);

    return 0;
}
