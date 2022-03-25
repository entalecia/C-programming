#include <stdio.h>

int main(){
    int a, p = 1, i;
    printf("Enter a number ");
    scanf("%d", &a);
    for (i = a; i > 0; i--){
        p *= i;
    }
    printf("Its factorial is %d", p);
    return 0;
}