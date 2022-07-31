#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int IDADE, SEC;
    scanf("%d", &IDADE);
    SEC = (IDADE * 31536000);
    printf("%d", SEC);
    return 0;
}