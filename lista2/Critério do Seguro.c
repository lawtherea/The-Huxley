#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sexo, idade, valor;
    scanf("%d %d", &sexo, &idade);
    if (sexo == 0 && idade == 1){
        printf("1");
    }
    else{
        printf("0");
    }
	return 0;
}