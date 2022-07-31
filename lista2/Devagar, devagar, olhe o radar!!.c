#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double velmax, vel, porcentagem, multa;
    int pontos;
    scanf("%lf %lf", &velmax, &vel);
    if (vel > velmax){
        porcentagem = (vel*100)/velmax;
        if (porcentagem <= 120){
            multa = 85.13;
            pontos = 4;
        }
        else if (porcentagem > 120 && porcentagem <= 150){
            multa = 127.69;
            pontos = 5;
        }
        else if (porcentagem > 150){
            multa = 574.62;
            pontos = 7;
        }
    }
    if (vel == velmax){
        multa = 0;
        pontos = 0;
    }
    
    printf("%.2lf\n%d", multa, pontos);
	return 0;
}