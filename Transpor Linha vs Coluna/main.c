#include <stdio.h>

int main()
{
    int i, j;
    int matriz[2][3];
    matriz[0][0] = 2;
    matriz[0][1] = 5;
    matriz[0][2] = 7;
    
    matriz[1][0] = 3;
    matriz[1][1] = 6;
    matriz[1][2] = 8;
    
    for(i = 0; i < 2; i++) {
        putchar('\n');
        for(j = 0; j < 3; j++) {
            printf("[%i]", matriz[i][j]);
        }
    }
    
    putchar('\n'); 
    
    for(int i = 0; i < 3; i++) {
        putchar('\n');
        for(int j = 0; j < 2; j++) {
            printf("[%i]", matriz[j][i]);
        }
    }
        
    return 0;
}

