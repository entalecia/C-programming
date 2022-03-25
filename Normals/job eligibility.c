#include <stdio.h>

int main(){
    char a;
    printf("Do you have a bachelor degree? (y): ");
    scanf(" %c",&a);
    if (a == 'y' || a == 'Y'){
        printf("You are eligible for the job!");
        return 0;
    }
    else{
        printf("Do you have an intermediate degree? (y/n): ");
        scanf(" %c", &a);
        if (a == 'y' || a == 'Y'){
            printf("Do you have a 5 year experience? (y/n): ");
            scanf(" %c", &a);
            if (a == 'y' || a == 'Y'){
                printf("You are eligible for the job.");
                return 0;
            }
        }
    }
    printf("You are not eligible for the job.");
    return 0;
}