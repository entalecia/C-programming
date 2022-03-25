#include <stdio.h>
#include <math.h>

int main(){
    int i, d;
    for(i=1; i<=10; i++){
        d = pow(i,3);
        printf("%d ", d);
    }
    return 0;
}