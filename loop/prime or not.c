#include <stdio.h>

int main(){
    int a, c=0, i;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (i=1;i<=a;i++){
        if (a % i == 0){
            c++;
        }
    }
    if (c == 2){
        printf("Prime");
    }
    else{
        printf("Not Prime.");
    }
}