#include <stdio.h>

int main(){
    int a, b, c, d, g;
    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d); 
    if (a >= b && a >= c && a >= d){
        g = a;
    }
    else if (b >= a && b >= c && b >= d){
        g = b;
    }
    else if (c >= a && c >= b && c >= d){
        g = c;
    }
    else{
        g = d;
    }
    printf("The greatest number is %d",g);
    return 0;
}