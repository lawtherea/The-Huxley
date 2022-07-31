#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float salario, salfinal;
    scanf("%f", &salario);
    if (salario > 300 && salario <= 500){
        salfinal = 0.07 * salario + salario;
    }
    else if (salario > 500){
        salfinal = 0.1 * salario + salario;
    }
    else{
        salfinal = 0.05 * salario + salario;
    }
    printf("%.2f", salfinal);
	return 0;
}