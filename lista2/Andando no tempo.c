#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int a, b, c, d;
   scanf("%d %d %d", &a, &b, &c);
   if (a == b || a == c || b == c){
       printf("S");
   }
    else if (((a + b) - c) == 0){
        printf("S");
    }
    else if (((a + c) - b) == 0){
        printf("S");
    }
    else if (((c + b) - a) == 0){
        printf("S");
    }
    else{
        printf("N");
    }
    return 0;
}