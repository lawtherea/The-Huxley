#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double RAIO, AREA;
    scanf("%lf", &RAIO);
    AREA = 3.14159 * (RAIO/100 * RAIO/100);
    printf("Area = %.4lf\n", AREA);
    return 0;
}