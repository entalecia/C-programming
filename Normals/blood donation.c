#include <stdio.h>

int main(){
    int age, weight;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 18 && age <= 55){
        printf("Enter your weight: ");
        scanf("%d", &weight);
        if (weight > 45){
            printf("You are eligible for blood donation.\n");
            return 0;
        }
    }
    printf("You are not eligible for blood donation.\n");
    return 0;    
}