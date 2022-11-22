//algoritmo: matriz_jb
//objetivo: Desenhar uma casa na matriz.
/*Descricao detalhada.
Le as informacoes e realiza o desenho de uma casa na matriz.
*/
#include <stdio.h>
#include <math.h>
char MATRIZ[44][44];
int LINHAS = 44;
int COLUNAS = 44;

char testarCondicoes(int linha, int coluna){
    if(coluna<12  || coluna > 32)
        return ' ';
    else if(coluna-linha==20 && linha>2 || linha+coluna==24 && linha>1 || (linha>11 && linha<37 && (coluna==12 || coluna==32 || linha==36 || linha==12 || linha==13)))
        return '1';
	return ' ';
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
