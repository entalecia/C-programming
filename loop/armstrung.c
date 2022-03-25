#include <stdio.h>
#include <math.h>

int main(){
    int a, sum = 0, d, i;
    printf("Enter a number ");
    scanf("%d", &a);
    i = a;
    while (a != 0){
        d = a % 10; 
        sum += pow(d,3);
        a /= 10;
    }
    if (sum == i){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}