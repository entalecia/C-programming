#include <stdio.h>

int power(int , int);

int main(){
    int n, p;
    printf("Enter num and its power: ");
    scanf("%d%d",&n, &p);
    printf("The value is %d", power(n,p));
}

int power(int n, int p){
    if (p != 0){
        return n * power(n, p - 1);
    }
    return 1;
}