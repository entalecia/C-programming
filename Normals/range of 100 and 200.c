#include <stdio.h>

int main(){
    int a,b,c, sum;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    if (sum >= 100 && sum <= 200){
        printf("It is in the range of 100 and 200.\n");
    }
    else{
        printf("It is not in the range of 100 and 200.\n");
    }
    return 0;
}