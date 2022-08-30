#include <stdio.h>

void sum(int *, int *);

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum(&a, &b);
    return 0;
}

void sum(int *p, int *q){
    int sum = *p + *q;
    printf("Sum: %d\n", sum);
}