#include <stdio.h>

int main(){
    float a = 1, i;
    for (i = 1; i <= 5; i++){
        printf("%.5f, ", a);
        a /= 10;
    }
}