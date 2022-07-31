#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double A, B, MEDIA;
    scanf("%lf %lf", &A, &B);
    MEDIA = (A * 3.5 + B * 7.5) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);
}