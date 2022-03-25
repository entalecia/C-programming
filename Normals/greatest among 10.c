#include <stdio.h>

int main(){
    int a, h, i;
    printf("Enter a number: ");
    scanf("%d",&a);
    h = a;
    for (i=1;i < 10; i++){
        printf("Enter a number: ");
        scanf("%d",&a);
        if (a > h){
            h = a;
            }
    }
    printf("The greatest number is %d",h);
    return 0;
}