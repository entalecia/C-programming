#include <stdio.h>

int main(){
    float a;
    printf("Enter your percentage: ");
    scanf("%f", &a);
    if (a >= 90)
        printf("A+");
    else if (a>=80 && a <90)
        printf("A");
    else if (a >= 70 && a < 80)
        printf("B+");
    else if (a >= 60 && a < 70)
        printf("B");
    else if (a >= 50 && a < 60)
        printf("C+");
    else
        printf("C");
    return 0;
}