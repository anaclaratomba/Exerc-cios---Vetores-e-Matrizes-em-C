#include <stdio.h>


int main()
{
    int i,j;
    int matriz[3][3];
    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [0][2] = 3;
    
    matriz [1][0] = 4;
    matriz [1][1] = 5;
    matriz [1][2] = 6;
    
    matriz [2][0] = 7;
    matriz [2][1] = 8;
    matriz [2][2] = 9;
    
    for(i = 0; i < 3; i++) {
        putchar('\n');
        for(j = 0; j < 3; j++){
            printf("[%i]", matriz[i][j]);
        }
    }
    putchar('\n');
    
    int soma1 = matriz[0][0] + matriz[1][1] + matriz[2][2];
    
    printf("\nSoma da diagonal principal: %i", soma1);
    
    int soma2 = matriz[0][2] + matriz[1][1] + matriz[2][0];
    
    printf("\nSoma da diagonal secundaria: %i", soma2);
    
    return 0;
}


