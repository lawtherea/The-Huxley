#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double VAL, FINAL;
    scanf("%lf", &VAL);
    FINAL = VAL + (VAL/10);
    printf("%.2lf\n", FINAL);
    return 0;
}