#include <stdio.h>

int main(){
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);
    if (a >= 'a' && a <= 'z'){
        printf("It is a letter.");
    }
    else if (a >= 'A' && a <='Z'){
        printf("It is an uppercase letter.");
    }
    else if (a >= '0' && a <= '9'){
        printf("It is a number.");
    }
    else{
        printf("It is other char.");
    }
    return 0;
}