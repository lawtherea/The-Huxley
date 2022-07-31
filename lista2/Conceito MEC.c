#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int livros, alunos, calc;
    scanf("%d %d", &livros, &alunos);
    calc = alunos/livros;
    if (calc <= 8){
        printf("A");
    }
    else if (calc >= 9 && calc <= 12){
        printf("B");
    }
    else if (calc >= 13 && calc <= 18){
        printf("C");
    }
    else if (calc > 18){
        printf("D");
    }
	return 0;
}