#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float qnt, res, porcent, chance;
    char * conceito;
    scanf("%f %f", &qnt, &res);
    porcent = res*100/qnt;
    if (porcent < 20){
        chance = 4.40;
        conceito = "Pessimo";
    }
    else if (porcent < 40 && porcent >= 20){
        chance = 31.65;
        conceito = "Ruim";
    }
    else if (porcent < 60 && porcent >= 40){
        chance = 56.82;
        conceito = "Bom";
    }
    else if (porcent < 80 && porcent >= 60){
        chance = 80.00;
        conceito = "Muito Bom";
    }
    else if (porcent <= 100 && porcent >= 80){
        chance = 94.00;
        conceito = "Excelente";
    }
    printf("%.2f%% %.2f%% %s", porcent, chance, conceito);
	return 0;
}