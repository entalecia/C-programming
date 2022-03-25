#include <stdio.h>

int main(){
    int i, code;
    for (i = 1; i <= 5; i++){
        printf("Enter unique 5-digit code: ");
        scanf("%d", &code);
        while (code >=10){
            code = code / 10;
        }
        switch (code)
        {
        case 1:
            printf("It is a CD.\n");
            break;
        case 2:
            printf("It is a DVD.\n");
            break;
        case 3:
            printf("It is a Movie.\n");
            break;
        case 4:
            printf("It is a Book.\n");
            break;

        default:
            printf("Unknown Type.\n");
            break;
        }
    }
    return 0;
}