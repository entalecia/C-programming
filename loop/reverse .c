#include <stdio.h>

int main(){
    int a, d, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    while (a != 0){
        d = a % 10;
        rev = rev * 10 + d;
        a /= 10;
    }
    printf("%d", rev);
    return 0;
}