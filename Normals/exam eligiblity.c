#include <stdio.h>

int main(){
    char a;
    printf("Are you above 18 years old? (y/n): ");
    scanf(" %c", &a);
    if (a == 'y' || a == 'Y'){
        printf("Do you have a bachelor degree in any fields? (y/n): ");
        scanf(" %c", &a);
        if (a == 'y' || a == 'Y'){
            printf("You are eligible for examination.");
            return 0;
        }
    }
    printf("You are not eligible for the examination.");
    return 0;
}