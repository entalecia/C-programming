#include <stdio.h>

int main(){
    char a;
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x, &y);
    printf("s=Sum, p=Product, d=Difference, r=Remainder\n");
    printf("Enter your choice: \n");
    scanf(" %c",&a);
    if (a == 's' || a == 'S'){
        printf("The sum is %d", x+y);
    }
    else if (a == 'p' || a == 'P'){
        printf("The product is %d",x*y);
    }
    else if (a == 'd' || a == 'D'){
        printf("The Difference is %d",x-y);
    }
    else if (a == 'r' || a == 'R'){
        printf("The Remainder is %d", x/y);
    }
    else{
        printf("Wrong Input.");
    }
    return 0;
}