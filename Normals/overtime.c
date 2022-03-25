#include <stdio.h>

int main(){
    int h;
    float hourly, overtime=0, extra=0, total;
    printf("Enter the number of hours worked per week: ");
    scanf("%d", &h);
    if (h-30-25 >= 0){
        extra = (h - 30 - 25) * 250 * 2;
        overtime = 25 * 250 * 1.5;
        hourly = 30 * 250;
    }
    else if (h - 30 >= 0 && h - 30 - 25 < 0){
        overtime = (h - 30) * 250 * 1.5;
        hourly = 30 * 250;
    }
    else{
        hourly = h * 250;
    }
    total = extra + overtime + hourly;
    printf("Total income of the user is %.3f\n", total);
    return 0;
}