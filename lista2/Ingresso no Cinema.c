#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A == 1 || B == 1){
        printf("1");
    }
    else{
        printf("0");
    }
	return 0;
}