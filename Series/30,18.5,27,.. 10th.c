#include <stdio.h>

int main(){
    float a = 30;
    int i;
    for (i=1; i<=10;i++){
        printf("%.2f ", a);
        a = a - 1.5;
    }
}