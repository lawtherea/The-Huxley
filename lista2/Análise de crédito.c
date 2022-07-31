#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario, comprometimento, disponivel, calculo;
    scanf ("%f %f", &salario, &comprometimento);
    calculo = (0.3 * salario) - comprometimento;
    if (calculo < 0){
        printf("0.00");
    }
    else{
        printf("%.2f", calculo);
    }
    
	return 0;
}