#include <stdio.h>

void multi(int*);

int main(){
    int a;
    printf("Enter a num: ");
    scanf("%d", &a);
    multi(&a);
}

void multi(int *a){
    int i;
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", *a, i, (*a)*i);
    }
}