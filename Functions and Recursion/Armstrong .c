#include <stdio.h>
#include <math.h>

int armstrong(int, int);

int main(){
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    if (a == armstrong(a, 0)){
        printf("Armstrong");
    }
    else{
        printf("Not armstrong.");
    }
}

int armstrong(int a, int s){
    if (a == 0){
        return s;
    }
    int d = a % 10;
    s += pow(d, 3);
    armstrong(a/10,s);
}