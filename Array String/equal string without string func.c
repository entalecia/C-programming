#include <stdio.h>

int main(){
    char a[100], b[100];
    int i, c = 1;
    printf("Enter two string: ");
    scanf("%s", &a);
    scanf("%s", &b);
    for(i = 0; a[i] != '\0' || b[i] != '\0'; i++){
        if (a[i] != b[i]){
            c = 0;
            break;
        }
    }
    if(c){
        printf("Equal string.");
    }
    else{
        printf("Not equal string.");
    }
}