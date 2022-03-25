#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b = sqrt(a);
    b = pow(b,2);
    if (b == a){
        printf("It is a perfect square");
    }
    else{
        printf("It is not a perfect square.");
    }
    return 0;
}