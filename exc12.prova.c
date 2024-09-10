#include <stdio.h> 

    void calculo(float valor, float IPTU) {
        float aliquota = valor * IPTU;
        float resultado = valor + aliquota;
        float porc = IPTU * 100;
        printf("\nO valor final é de R$%.2f\n\nValor original: R$%.2f\nAlíquota: %.1f%%", resultado, valor, porc);
        
}

int main()
{
 
    float valor;
    float IPTU;
    
    printf("Digite o valor:\t");
    scanf("%f", &valor);
    
    if (valor <= 100000) {
        IPTU = 0.01;
    } else if(valor > 100000 && valor <= 300000) {
        IPTU = 0.015;
    } else if(valor > 300000 && valor <= 500000) {
        IPTU = 0.02;
    } else if(valor > 500000) {
        IPTU = 0.025;
    }

    calculo(valor,IPTU);
    
    return 0;
}
