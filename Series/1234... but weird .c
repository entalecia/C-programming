#include <stdio.h>

int main(){
    int i, c, j, d;
    for (i =1; i <=5; i++){
        c = 0;
        d = i;
        for (j = 0; j < i; j++){
            d = d + c;
            printf("%d  ", d);
            c = 4 - j;
        }
        printf("\n");
    }
}