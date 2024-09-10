#include<stdio.h>
#include<locale.h>

int resto_divisao(int n1, int n2){
   return n1%n2;
}

void mensagem(){
  printf(" O valor informado é um número Primo");
}

int main(){
  setlocale(LC_ALL, "Portuguese");
  int num, result;

   printf("informe um número? ");
   scanf("%d", &num);

   result = resto_divisao(num,2);

     if (result!= 0) {
      printf("O valor retornado é: %d ", result);



   }else

  return 0;

}
