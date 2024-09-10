#include <stdio.h> 

    void calculo(float valor, float ICMS) {
        float desconto = valor * ICMS;
        float resultado = valor - desconto;
        int porc = ICMS * 100;
        printf("\nO valor final é de R$%.2f\n\nValor original: R$%.2f\nDesconto de ICMS: %d%%", resultado, valor, porc);
        
}

int main()
{
 
    float valor;
    float ICMS;
    
    printf("Digite o valor:\t");
    scanf("%f", &valor);
    
    if (valor <= 1000) {
        ICMS = 0.05;
    } else if(valor > 1000 && valor <= 5000) {
        ICMS = 0.1;
    } else if(valor > 5000) {
        ICMS = 0.15;
    }
    
    calculo(valor,ICMS);

    return 0;
}
