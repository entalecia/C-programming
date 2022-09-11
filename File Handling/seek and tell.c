#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp = fopen("./Files/file.txt", "r");
    fseek(fp, 10, SEEK_SET);
    ch = fgetc(fp);
    printf("The character at position 10 is %c\n", ch);
    printf("The current position of the pointer is %ld", ftell(fp));
}