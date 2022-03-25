#include <stdio.h>

int main(){
    int page, copies, total;
    int i;
    printf("Type:1\nPrint:2\nEnter your choice: ");
    scanf("%d", &i);
    if (i == 1){
        printf("Enter the number of pages you want to be typed: ");
        scanf("%d", &page);
        total = page * 3;
    }
    else if (i == 2){
        printf("Enter the number of pages you want to be typed: ");
        scanf("%d", &page);
        printf("Enter the number of copies you want to print: ");
        scanf("%d", &copies);
        if (copies > 1){
            total = 5*page + 3*(copies-1)*page;
        }
        else{
            total = 5*page;
        }
    }
    printf("Your total price is %d\n", total);
    return 0;
}