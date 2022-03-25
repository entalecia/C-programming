#include <stdio.h>
#include <math.h>

int main(){
    int a, sum=0, d;
    printf("Enter a number:  ");
    scanf("%d", &a);
    while (a!=0){
        d = a % 10;
        if (d % 2 == 0){
            sum += pow(d,3);
            }
        a /= 10;
    }
    printf("The sum of cube of even digits is: %d", sum);
    return 0;
}