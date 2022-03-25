#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int i;
    printf("Enter your string: ");
    scanf("%s", &a);
    int x = strlen(a);
    for(i = 0; i < strlen(a); i++){
        b[i] = a[x-1];
        x--;
    }
    if(strcmp(a,b) == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    return 0;
}