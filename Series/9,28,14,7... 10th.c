#include <stdio.h>

int main(){
    int a = 9, i;
    for (i=1; i <=10; i++){
        printf("%d ", a);
        if (a%2 == 0){
            a /= 2;
        }
        else{
            a = a *3 + 1;
        }
    }
}