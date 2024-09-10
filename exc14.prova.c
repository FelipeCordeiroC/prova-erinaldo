#include <iostream>

int main()
{
    int opt;
    printf("Que turno é no momento?\n{1} Manhã\n{2} Tarde\n{3} Noite\nResposta: ");
    scanf("%d", &opt);
    
    switch(opt) {
        case 1: 
            printf("Bom dia flor do dia! Seja bem-vindo(a)");
            break;
            
        case 2:
            printf("Boa tarde campeão! Seja bem-vindo(a)");
            break;
            
        case 3:
            printf("Boa noite querido(a)! Seja bem-vindo(a)");
            break;
            
        default: 
            printf("Resposta inválida, tente novamente");
            break;
    }

    return 0;
}
