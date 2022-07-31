#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int level, pot;
    scanf("%d %d", &level);
    if (level <= 20){
        pot = 20 + (level*level*level);
    }
    else if (level > 20 && level <= 40){
        pot = 8000 + (level-10)*(level-10);
    }
    else if (level > 40 && level <= 60){
        pot = 9000 + 5*level;
    }
    else if (level > 60 && level <= 80){
        pot = 9300 + 2*level;
    }
    else if (level > 80 && level <= 100){
        pot = 9500 + level;
    }
    printf("Potencia de : %d W", pot);
	return 0;
}