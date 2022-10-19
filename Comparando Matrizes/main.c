#include <stdio.h>

int main(){
    int matriz1[3][2],matriz2[3][2],i,j;
    matriz1[0][0] = 10;
    matriz1[0][1] = 1;
    matriz1[1][0] = 12;
    matriz1[1][1] = -5;
    matriz1[2][0] = 4;
    matriz1[2][1] = 8;
    
    matriz2[0][0] = 10;
    matriz2[0][1] = -1;
    matriz2[1][0] = -12;
    matriz2[1][1] = -5;
    matriz2[2][0] = 4;
    matriz2[2][1] = -8;

    putchar('\n');
    
    for (int i = 0; i < 3;i++) {
        putchar('\n');
        for (int j = 0; j < 2;j++) {
            printf("[%i]",matriz1[i][j]);
        }
    }
    putchar('\n');
    
    for (int i = 0; i < 3;i++) {
        putchar('\n');
        for (int j = 0; j < 2;j++) {
            printf("[%i]",matriz2[i][j]);
        }
    }
    putchar('\n');
    printf("\nAs matrizes sao opostas ou nao?\n");
    
        if(matriz1[0][0] == matriz2[0][0]) {
            printf("\nNao sao opostas");
        }else{ printf("\nSao opostas"); }
        
        if(matriz1[0][1] == matriz2[0][1]) {
            printf("\nNao sao opostas");
        }else{ printf("\nSao opostas"); } 
        
        if(matriz1[1][0] == matriz2[1][0]) {
            printf("\nNao sao opostas");
        }else{ printf("\nSao opostas"); } 
        
        if(matriz1[1][1] == matriz2[1][1]) {
            printf("\nNao sao opostas");
        }else{ printf("\nSao opostas"); } 
        
        if(matriz1[2][0] == matriz2[2][0]) {
            printf("\nNao sao opostas");
        }else{ printf("\nSao opostas"); }
        
        if(matriz1[2][1] == matriz2[2][1]) {
            printf("\nNao sao opostas");
        }else{ printf("\nSao opostas"); }

return 0;
}
