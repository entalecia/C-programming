#include <stdio.h>

void factorial(int *);

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    factorial(&a);
    return 0;
}

void factorial(int *p){
    int fact = 1;
    for(int i = 1; i <= *p; i++){
        fact *= i;
    }
    printf("Factorial: %d\n", fact);
}