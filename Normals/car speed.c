#include <stdio.h>

int main(){
    int sum, highest, lowest, a, i;

    printf("Enter speed of car 1: ");
    scanf("%d", &a);
    highest = a;
    lowest = a;
    for (i = 2; i <= 5000; i++){
        printf("Enter speed of car %d: ",i);
        scanf("%d",&a);
        sum += a;
        if (a > highest){
            highest = a;
        }
        else if (a < lowest){
            lowest = a;
        }
    }
    float average = sum / (i-1);
    printf("The average is %.2f\n",average);
    printf("Highest speed is %d and Lowest speed is %d\n", highest, lowest);
    return 0;
}