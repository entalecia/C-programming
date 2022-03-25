#include <stdio.h>

int main(){
    float a;
    printf("Enter your salary: ");
    scanf("%f", &a);
    if (a > 5000 && a < 8000){
        printf("Your post is Office boy.");
    }
    else if (a >= 8000 && a < 15000){
        printf("Your post is Accontant.");
    }
    else if (a >= 15000 && a < 20000){
        printf("Your post is Manager.");
    }
    else if (a >= 20000 && a < 25000){
        printf("Your post is Director.");
    }
    else if (a >= 25000 && a < 40000){
        printf("Your post is Chairman.");
    }
    return 0;
}
