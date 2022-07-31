#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double LIT, DES, PRECO, DESCF, VALORF;
    char COMB[1];
    scanf("%lf %s", &LIT, COMB);
    if(strcmp (COMB, "A") == 0){
        if(LIT <= 20){
            DES = 0.03;
            PRECO = 1.90;
        }
        else{
            DES = 0.05;
            PRECO = 1.90;
        }
    }
    if(strcmp (COMB, "G") == 0){
        if(LIT <= 20){
            DES = 0.04;
            PRECO = 2.50;
        }
        else{
            DES = 0.06;
            PRECO = 2.50;
        }
    }
    if(strcmp (COMB, "D") == 0){
        if(LIT <= 25){
            DES = 0;
            PRECO = 1.66;
        }
        else{
            DES = 0.04;
            PRECO = 1.66;
        }
    }

    DESCF = (LIT * PRECO) * DES;
    VALORF = (LIT * PRECO) - DESCF;
    printf("R$ %.2lf", VALORF);
    return 0;
}