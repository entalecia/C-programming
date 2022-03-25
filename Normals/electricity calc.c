#include <stdio.h>

int main(){
    int unit;
    float total;
    printf("Enter your electricity in units: ");
    scanf("%d", &unit);
    if (unit <= 50){
        total = unit * 0.5;
    }
    else if (unit > 50 && unit <= 150){
        total = 50*0.5 + (unit - 50)*0.75; 
    }
    else if (unit > 150 && unit <= 250){
        total = 50*0.5 + 100*0.75 + (unit - 150)*1.2;
    }
    else if (unit > 250){
        total = 50*0.5 + 100*0.75 + 100*1.2 + (unit - 250)*1.5;
    }
    total = total + total*0.2;
    printf("The total bill you have to pay is Rs. %.3f\n", total);
    return 0;
}