#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C, D, DIFERENCA;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    DIFERENCA = (A * B) - (C * D);
    printf("DIFERENCA = %d\n", DIFERENCA);
	return 0;
}