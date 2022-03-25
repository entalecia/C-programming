#include <stdio.h>

int main(){
    float value, tax_value = 0;
    printf("Enter the value of your house: ");
    scanf("%f", &value);
    if (value >= 200000){
        tax_value = value * (2.0/100);
    }
    else if (value >= 100000 && value < 200000){
        tax_value = value * (1.5/100);
    }
    else if (value >= 50000 && value < 100000){
        tax_value = value * (1.0/100);
    }
    printf("The total tax amount to pay is %.2f\n", tax_value);
    return 0;
}

