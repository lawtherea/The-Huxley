#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double A, B, C, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = (A+B+C)/3;
    
    if (MEDIA >= 70 && MEDIA <= 100){
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n", MEDIA);
    }
    
    else if (MEDIA >= 0 && MEDIA <= 40){
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", MEDIA);
    }
    
    else if (MEDIA > 40 && MEDIA < 70){
        printf("A media do aluno foi %.2lf e ele foi FINAL\n", MEDIA);
    }
    
    else{
        printf("Media invalida");
    }
    
	return 0;
}