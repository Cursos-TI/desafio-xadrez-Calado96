#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Novato/Aventureiro - Movimentação das Peças (criado a logica de movimentação da peças com estruturas de repetições mais complexas)
// Nível Mestre - Funções Recursivas e Loops Aninhados

// Área das funções recursivas 

//Função Recursiva da rainha
void MoverRainha(int rainha) {
    if (rainha > 0){
        printf(" RAINHA: ESQUERDA \n");
        MoverRainha(rainha - 1);
    }

}
// Função Recursiva da Torre
void MoverTorre(int torre){
    if (torre > 0){
        printf(" TORRE: DIREITA \n");
        MoverTorre(torre - 1);
    }
}
// Função Recursiva do Bispo
void MoverBispo(int bispo) {
    if (bispo > 0){
        printf(" BISPO: CIMA, DIREITA \n");
        MoverBispo(bispo - 1);
    }

}

int main() {       
    
    //declaração de variaveis
    int cavalo = 1; 
    
     //implementação da movimentação da Rainha
    MoverRainha(8);

    printf("\n");

    // implementação da movimentação da Torre
    MoverTorre(5);

    printf("\n");

    // implementação da movimentação do Bispo
   MoverBispo(5);
    
    printf("\n");

printf("\n");

// Implementação da Movimentação do Cavalo
while (cavalo <= 1){
     for( int vertical = 1, direita = 0; vertical <= 3; vertical++){
          if (vertical > 2) {
              direita++;
             if (direita > 1){
                break; 
           } 
           printf(" CAVALO: DIREITA \n");
           continue;
        }
        printf(" CAVALO: CIMA \n");
      }
      cavalo++; 
      
 }
    return 0;
}