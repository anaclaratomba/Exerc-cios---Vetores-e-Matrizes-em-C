#include <string.h>
#include <stdio.h>

int main()
{
    char palavra1[30] = {"ana"};
    char palavra2[30];
    
    
    int i = 0;
    for(i; i<=31; i++) {
        palavra2[i] = palavra1[i];
}
    
    printf("A palavra e: %s", palavra2);

    return 0;
}

