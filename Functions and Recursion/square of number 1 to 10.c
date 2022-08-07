#include <stdio.h>

int square(int);

int main(){
    int i = 1;
    square(i);
    return 0;
}

int square(int n){
    if (n > 10){
        return 0;
    }
    printf("The square of %d is %d\n", n, n*n);
    square(n+1);
}