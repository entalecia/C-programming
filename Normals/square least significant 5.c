#include <stdio.h>

int main(){
    int a;
    long long int square;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 5 || a % 10 == 5){
        square = a*a;
        printf("It's square is %lld\n", square);
    }
    else{
        printf("It's least significant number is not 5.\n");
    }
    return 0;
}