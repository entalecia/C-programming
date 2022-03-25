#include <stdio.h>

int main(){
    int a, sum = 0;
    printf("Enter a number ");
    scanf("%d", &a);
    while (a != 0){
        if ((a%10) % 2 != 0){
            sum += a % 10;
        }
        a /= 10;
    }
    printf("The sum of odd digits are %d", sum);
    return 0;
}