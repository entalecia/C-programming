#include <stdio.h>

int max(int, int, int);

int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("The greatest number is %d", max(a,b,c));;
    return 0;
}

int max(int a, int b, int c){
    if (a >= b && a >= c){
        return a;
    }
    else if (b >= a && b >= c){
        return b;
    }
    return c;
}