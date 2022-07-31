#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int IDADE;
    scanf("%d", &IDADE);
    if(IDADE < 16){
        printf("nao eleitor");
    }
    else if(IDADE >= 18 && IDADE <= 65){
        printf("eleitor obrigatorio");
    }
    else if(IDADE >= 16 && IDADE <= 18 || IDADE > 65){
        printf("eleitor facultativo");
    }
	return 0;
}