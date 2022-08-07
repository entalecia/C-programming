#include <stdio.h>

float SI(int,int,int);

int main(){
    int p, t, r;
    printf("Enter sum, time and rate: ");
    scanf("%d%d%d", &p, &t, &r);
    printf("You have to pay %.2f interest.", SI(p,t,r));
    return 0;
}

float SI(int p, int t, int r){
    return (p*t*r)/100 ;
}