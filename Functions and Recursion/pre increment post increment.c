#include <stdio.h>

void increment(int);

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    increment(n);
    return 0;
}

void increment(int n){
    printf("Pre increment value is %d\n", ++n);
    printf("Current value is %d\n", n);
    printf("Post increment value is %d\n", n++);
    printf("Current value is %d\n", n);
}
