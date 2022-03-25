#include <stdio.h>

int main(){
    int i, j, d;
    for(i = 1; i <= 5; i++){
        d = 1;
        for(j = 1; j <= i; j++){
            printf("%d", d);
            d++;
        }
        printf("\n");
    }
}