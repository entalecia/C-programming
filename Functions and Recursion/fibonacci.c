#include <stdio.h>

int fib(int);

int main(){
    int n;
    printf("Enter your num: ");
    scanf("%d", &n);
    printf("Fibonacci %d", fib(n));
}

int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}