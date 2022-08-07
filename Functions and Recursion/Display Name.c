#include <stdio.h>

void display(char []);

int main(){
    char a[50];
    printf("Enter your name: ");
    fgets(a, 50, stdin);
    display(a);
    return 0;
}

void display(char a[]){
    printf("Your name is %s", a);
}