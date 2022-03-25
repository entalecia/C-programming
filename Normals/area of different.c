#include <stdio.h>

int main(){
    int n;
    float r ,l,b,a;
    printf("1-Rectangle\n2-Circle\n3-Triangle\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n == 1){
        printf("Enter length and breadth: ");
        scanf("%f%f",&l,&b);
        a = l*b;
    }
    else if (n == 2){
        printf("Enter the radius of Circle: ");
        scanf("%f",&r);
        a = 3.14 * r * r;
    }
    else if (n == 3){
        printf("Enter base and height of Triangle: ");
        scanf("%f%f", &b,&l);
        a = 0.5 * b * l;
    }
    else{
        printf("Invalid Input.");
        return 0;
    }
    printf("The area of your required selection is %.2f\n", a);
    return 0;
}