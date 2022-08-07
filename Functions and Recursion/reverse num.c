#include <stdio.h>

int rev(int, int);

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    printf("The reverse is %d", rev(n, 0));
    return 0;
}

int rev(int n, int r){
    if (n == 0){
        return r;
    }
    int d = n % 10;
    r = r * 10 + d;
    rev(n/10, r);
}