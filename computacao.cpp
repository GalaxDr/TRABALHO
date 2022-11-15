// Algoritmo: matriz41x41
// Objetivo: Preencher uma matriz com o desenho especificado
// Autor: Júlio César Becker e Kristian Antonio Frey
// Data: 15/11/2022
/* Descrição detalhada.
Lê as informações e completa a matriz com o desenho
*/
#include <stdio.h>
#include <math.h>
char MATRIZ[41][41];
int LINHAS = 41;
int COLUNAS = 41;


char testarCondicoes(int linha, int coluna){
    if(coluna<4  || coluna > 36 || linha == 33)
        return ' ';
    else if(coluna-linha==4 || linha+coluna==36 || ((coluna == 11 || coluna == 19 || coluna == 27) && linha>34 && linha<40))
        return '0';
    return '1';
}

void inicia_matriz() {
    for (int L = 0; L < LINHAS; L++) {
        for (int C = 0; C < COLUNAS; C++) {
            MATRIZ[L][C] = testarCondicoes(L, C);
        }
    }
}

void printa_matriz(){
    for (int L = 0; L < LINHAS; L++) {
        for (int C = 0; C < COLUNAS; C++) {
            printf(" %c ", MATRIZ[L][C]);
        }
        printf("\n");
    }
}

int main(void) {
    inicia_matriz();
    printa_matriz();
    return 0;
}
