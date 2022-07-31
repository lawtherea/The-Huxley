#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double cod, preco, quant, valor, total;
    scanf("%lf %lf", &cod, &quant);
    if (cod == 1){
        preco = 5.30;
    }
    else if (cod == 2){
        preco = 6.00;
    }
    else if (cod == 3){
        preco = 3.20;
    }
    else if (cod == 4){
        preco = 2.50;
    }
    valor = preco * quant;
    if (quant >= 15 || valor >= 40){
        total = valor - (valor*15/100);
    }
    else{
        total = valor;
    }
    printf("R$ %.2lf", total);
	return 0;
}