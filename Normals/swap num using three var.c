#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    printf("a = %d and b = %d\n", a, b);
    c = b;
    b = a;
    a = c;
    printf("a = %d and b = %d\n", a, b);
    return 0;
}