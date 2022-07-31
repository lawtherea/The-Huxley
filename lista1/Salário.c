#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double NUM, HOR, VAL, SALARIO;
    scanf("%lf %lf %lf", &NUM, &HOR, &VAL);
    SALARIO = VAL * HOR;
    printf("NUMBER = %.0lf\nSALARY = R$ %.2lf", NUM, SALARIO);
    return 0;
}