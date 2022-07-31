#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int X, ANTECESSOR, SUCESSOR;
    scanf("%d", &X);
    ANTECESSOR = X - 1;
    SUCESSOR = X + 1;
    printf("%d %d", ANTECESSOR, SUCESSOR);
    return 0;
}