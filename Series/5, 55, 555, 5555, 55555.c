#include <stdio.h>

int main(){
    int a = 5, i;
    for (i = 1; i <=5; i++){
        printf("%d ",a);
        a = a*10 + 5;
    }
}