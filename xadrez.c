#include <stdio.h>

int main() {
  
    
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita, Numero do movimento : %d \n",i);
    }

    printf("\nMovimento do Bispo (5 casas para Cima Direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Diagonal, Numero do movimento : %d \n",j);
        
        j++;
    }

    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda, Numero do movimento : %d \n",k);
        k++;
    } while (k <= 8);

    return 0;
}
