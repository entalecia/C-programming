#include <stdio.h>
#include <math.h>

int main(){
    float a, b;
    printf("Enter a number: ");
    scanf("%f", &a);
    b = pow(a,10.0);
    printf("Power to 10 is %f\n", b);
    return 0;
}