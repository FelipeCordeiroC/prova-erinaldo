#include<stdio.h>
#include<locale.h>

/*variaveis hipotenusa = hpt
lados = l1 e l2
*/

void lados( int a, int b, int c){
	int hpt,l1,l2;
	
	if (a >= b && a >= c){
	hpt = a;
    l1 = b;
    l2 = c;
    
  }else if (b>= a && b>=c){
  	hpt = b;
    l1 = a;
    l2 = c;
    
  }else {
  
   hpt = c;
   l1 = a;
   l2 = b;
}
    if (hpt*hpt == l1*l1 + l2*l2){
    printf("é um triangulo retangulo.\n");
}
}

  int main(){
  setlocale(LC_ALL, "Portuguese");
   int l1, l2, l3, r;
   
   printf("informe o primeiro lado do triangulo? ");
   scanf("%d", &l1);
   printf("informe o primeiro lado do triangulo? ");
   scanf("%d", &l2);
   printf("informe o primeiro lado do triangulo? ");
   scanf("%d", &l3);
   
	lados(l1,l2,l3);
    
    
    return 0;
}
