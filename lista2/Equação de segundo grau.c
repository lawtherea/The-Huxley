#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, delta, raiz1, raiz2;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = ((b*b) -(4*a*c));
    if (a == 0){
        printf("NEESG");
    }
    else if (delta >= 0){
        raiz1 = (-b + sqrt(delta))/(2 * a);
        raiz2 = (-b - sqrt(delta))/(2 * a);
        printf("%.2lf\n%.2lf", raiz1, raiz2);
    }
    else if (delta < 0){
        printf("NRR");
    }
	return 0;
}