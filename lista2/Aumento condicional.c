#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double SAL, PER, AUMENTO, FINAL;
    scanf("%lf", &SAL);
    if(SAL <= 280){
        PER = 20;
        AUMENTO = (PER/100)*SAL;
        FINAL = SAL + AUMENTO;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", SAL, PER, AUMENTO, FINAL);
    }
    
    else if(SAL > 280 && SAL <= 700){
        PER = 15;
        AUMENTO = (PER/100)*SAL;
        FINAL = SAL + AUMENTO;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", SAL, PER, AUMENTO, FINAL);
        }
    
    else if(SAL > 700 && SAL < 1500){
        PER = 10;
        AUMENTO = (PER/100)*SAL;
        FINAL = SAL + AUMENTO;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", SAL, PER, AUMENTO, FINAL);
        }
        
    else{
        PER = 5;
        AUMENTO = (PER/100)*SAL;
        FINAL = SAL + AUMENTO;
        printf("%.2lf\n%.0lf\n%.2lf\n%.2lf\n", SAL, PER, AUMENTO, FINAL);
        }
    
    return 0;
}