#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int i, w = 0;
    printf("Enter your string: ");
    fgets(a, 100, stdin);
    for(i = 0; i <= strlen(a); i++){
        if (a[i] == ' ' || a[i] == '\0'){
            w++;
        }
    }
    printf("%d",w);
    return 0;
}