#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int consumo, total;
    scanf("%d", &consumo);
    if (consumo <= 10){
        total = 7;
    }
    else if (consumo > 10 && consumo < 31){
        total = (consumo - 10) + 7;
    }
    else if (consumo > 30 && consumo < 101){
        total = ((consumo - 30) * 2) + 20 + 7;
    }
    else if (consumo > 100){
        total = ((consumo - 100)* 5) + 140 + 20 + 7;
    }
    printf("%d", total);
	return 0;
}