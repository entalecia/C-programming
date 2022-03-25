#include <stdio.h>

int main(){
    int i, d = 54321;
    for (i = 1; i <= 5; i++){
        printf("%d ",d);
        d /= 10;
    }
}