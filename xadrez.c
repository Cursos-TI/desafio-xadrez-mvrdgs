#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

const int bishop = 5;
const int tower = 5;
const int queen = 8;

void bishopMovement(int move) {
    if (move > 0) {
        printf("direita, cima\n");
        return bishopMovement(move - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("bishop:\n");
    // for(int i = 0; i < bishop; i++) {
    //     printf("direita, cima\n");
    // }
    bishopMovement(bishop);

    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\ntower:\n");
    int i = 0;
    while(i < tower) {
        printf("direita\n");
        i++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nqueen:\n");
    for(int i = 0; i < queen; i++) {
        printf("esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    const firstDirection = 1;
    const secondDirection = 2;

    printf("\nhorse:\n");
    int firstMoves = 0;
    do {
        printf("cima\n");

        int secondMoves = 0;
        do {
            printf("esquerda\n");
            secondMoves++;
        } while(secondMoves < secondDirection);

        firstMoves++;
    } while(firstMoves < firstDirection);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
