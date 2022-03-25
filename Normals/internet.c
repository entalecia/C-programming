#include <stdio.h>

int main(){
    float a, cost;
    printf("Enter the number of hours: ");
    scanf("%f", &a);
    if (a <= 1){
        cost = 10;
    }
    else if (a >= 1 && a <= 1.5){
        cost = 10 + ((a-1)*10);
    }
    else if (a > 1.5){
        cost = 10 + 20 + (a-1.5)*90;
    }
    printf("The billing price is %.2f\n", cost);
    return 0;
}