#include <stdio.h>

int SI(int *, int *, int *);

int main(){
    int p, t, r;
    printf("Enter principle, time and rate: ");
    scanf("%d %d %d", &p, &t, &r);
    printf("The SI is: %d",SI(&p, &t, &r));
}

int SI(int *p, int *t, int *r){
    return ((*p) * (*t) * (*r)) / 100;
}