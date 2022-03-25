#include <stdio.h>

int main(){
    int i,a, p=1;
    for (i = 1; i <= 5; i++){
        printf("enter a number: ");
        scanf("%d", &a);
        p *= a;
    }
    printf("The total product is %d", p);
}