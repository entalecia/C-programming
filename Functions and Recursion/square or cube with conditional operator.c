#include <stdio.h>

void sq_cb(int, int);

int main(){
    int n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter 1 for square or 2 for cube: ");
    scanf("%d", &a);
    sq_cb(a, n);
    return 0;
}

void sq_cb(int n, int a){
    int y = (a == 1 || a == 2)? 0: printf("Invalid.");
    int x = (a == 1)? n*n : n*n*n;
    if(y == 0){
        printf("Your calculation is %d", x);
    }
}