#include <stdio.h>

int main(){
    int a, b, c, m;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a >= b && a <= c) || (a >= c && a <= b)){
        m = a;
    }
    else if ((b >= c && b <= a) || (b >= a && b <= c)){
        m = b;
    }
    else if ((c >= a && c <= b) || (c >= b && c <= a)){
        m = c;
    }
    printf("%d is the middle number.",m);
    return 0;
}