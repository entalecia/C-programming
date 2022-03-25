#include <stdio.h>

int main(){
    int a = 2 ,b = 0 ,c = 0, i;
    for (i = 1; i <= 13; i++){
        printf("%d ", a);
        c = a + b;
        b = a;
        a = c;
    }
}