#include <stdio.h>

int factorial(int);

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    printf("The factorial is %d", factorial(n));
    return 0;
}

int factorial(int n){
    if (n == 1){
        return 1;
    }
    return n*factorial(n - 1);
}