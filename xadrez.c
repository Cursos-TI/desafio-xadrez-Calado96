#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato - Movimentação das Peças
int main() {           
    //declaração de variaveis
    int rainha, torre = 1, bispo;
    
    // Implementação de Movimentação do Bispo
     for ( bispo = 0; bispo <= 5; bispo ++) {
        printf(" BISPO: CIMA DIREITA: %d\n", bispo); 
    }

    // Implementação de Movimentação da Torre
     while (torre <= 5) {
        torre ++;
        printf(" TORRE: DIREITA: %d\n", torre);
    }

    // Implementação de Movimentação da Rainha
     rainha = 0;
    do {
        printf(" RAINHA: ESQUERDA: %d\n", rainha);
        rainha++;
    } while (rainha <= 8);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
