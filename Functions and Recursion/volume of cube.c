#include <stdio.h>
#include <math.h>

int volume(int);

int main(){
    int l;
    printf("Enter length of cube: ");
    scanf("%d", &l);
    printf("Volume of cube is %d", volume(l));
    return 0;
}

int volume(int l){
    return pow(l, 3);
}