#include <stdio.h>

long int binary(int);

int main(){
    int i;
    printf("Enter your decimal number: ");
    scanf("%d", &i);
    printf("The binary of %d is %ld", i, binary(i));
}

long int binary(int n){
    int b = 0, y = 1;
    while (n != 0){
        int d = n % 2;
        b += d * y;
        y *= 10;
        n /= 2;
    }
    return b;
}