#include <stdio.h>

void check(int);

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    check(n);
    return 0;
}

void check(int n){
    if (n % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd.");
    }
}