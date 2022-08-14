#include <stdio.h>

void square(int);
void cube(int);

int main(){
    int n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter 1 for square or 2 for cube: ");
    scanf("%d", &a);
    (a == 1)? square(n): cube(n);
    return 0;
}

void square(int a){
    printf("Square of %d is %d", a, a*a);
}

void cube(int a){
    printf("Cube of %d is %d",a, a*a*a);
}