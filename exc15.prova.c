#include<stdio.h>
#include<locale.h>
#include<ctype.h>

/* Crie um programa que converta um valor monetário entre três moedas: real
(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
moeda de destino e o valor a ser convertido. As taxas de conversão são as
seguintes:
* 1 USD = 5.30 BRL
* 1 EUR = 6.20 BRL
* 1 BRL = 0.19 USD
* 1 BRL = 0.16 EUR
*/

float conversor_moeda(float valor, char moedaOrig, char moedaDest){
	float valor_convertido;
	
	
	if(moedaOrig == 'U' && moedaDest == 'B'){
	   valor_convertido = valor *5.30;
	   
   }else if (moedaOrig == 'E' && moedaDest == 'B'){
   	   valor_convertido = valor *6.20;
   	   
   }else if (moedaOrig == 'B' && moedaDest == 'U'){
        valor_convertido = valor *0.19;
   }else if (moedaOrig == 'B' && moedaDest == 'E'){
        valor_convertido = valor *0.16;
   }else {
      printf("**********Erro. Valor digitado é invalido. Digite novamente.*************");
      return -1;
   }  
   
   return valor_convertido;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char moedaOrig, moedaDest;
	float valor,valor_convertido;
	
	printf(" Informe a moeda de origem.\n Obs: Use (B para real, U para dolar, E para Euro). ");
	scanf(" %c",&moedaOrig);
	printf(" Informe a moeda de Destino.\n Obs: Use (B para real, U para dolar, E para Euro). ");
	scanf(" %c",&moedaDest);
	
	printf("Informe o valor que deseja converter? ");
	scanf("%f",&valor);
	
	valor_convertido = conversor_moeda(valor, toupper(moedaOrig),toupper(moedaDest));
	
	  if (valor_convertido >=0) {
	    printf("O valor convertido é de: R$ %.2f %\n", valor_convertido,moedaDest);
	
}
	
return 0;

	
}
