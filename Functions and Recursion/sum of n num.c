#include <stdio.h>

int sum(int);

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    printf("The sum is %d", sum(n));
}

int sum(int n){
    if (n != 0)
        return n + sum(n - 1);
    return n;
}