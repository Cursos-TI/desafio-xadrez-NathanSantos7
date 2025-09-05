#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void Torre(int casas, int atual) {
    if (atual > casas) return;
    printf("Torre -> Direita, Movimento: %d\n", atual);
    Torre(casas, atual + 1);
}

// Função recursiva para mover a Rainha para a esquerda
void Rainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Rainha -> Esquerda, Movimento: %d\n", atual);
    Rainha(casas, atual + 1);
}

// Função recursiva com loops aninhados para o Bispo (Cima-Direita)
void Bispo(int casasVerticais, int casasHorizontais, int passoAtual) {
    if (passoAtual > casasVerticais || passoAtual > casasHorizontais) return; // caso base

    // Loop externo: vertical (aqui apenas um passo, controlado pela recursão)
    for (int v = passoAtual; v <= passoAtual; v++) {
        // Loop interno: horizontal (também apenas um passo, controlado pela recursão)
        for (int h = passoAtual; h <= passoAtual; h++) {
            printf("Bispo -> Cima-Direita, Movimento Vertical: %d, Horizontal: %d\n", v, h);
        }
    }

    // Chamada recursiva para o próximo passo da diagonal
    Bispo(casasVerticais, casasHorizontais, passoAtual + 1);
}


void Cavalo(int movimentos) {
    int direita = 1; 
    for (int i = 1; i <= movimentos; i++) {          
        printf("Cavalo -> Cima, Movimento Vertical: %d\n", i);
        if (i % 2 == 0) {                           
            int j = 1;
            while (j <= 1) {                        
                printf("Cavalo -> Direita, Movimento Lateral: %d\n", direita);
                j++;
                direita++;                           
            }
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para a Direita):\n");
    Torre(5, 1);

    printf("\nMovimento do Bispo (5 casas para Cima e 5 casas para Direita):\n");
    Bispo(5, 5, 1);

    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    Rainha(8, 1);

    printf("\nMovimento do Cavalo (2 casas para Cima e 1 para Direita, 8 movimentos no total):\n");
    Cavalo(8);

    return 0;
}
