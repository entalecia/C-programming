#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The address of a is %u\n", &a);
    int b = a * a;
    printf("The square of a is %d\n", b);
    printf("The address of b is %u\n", &b);
}