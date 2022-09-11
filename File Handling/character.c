#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    fp = fopen("./Files/file.txt", "w");
    printf("Enter a character: ");
    scanf("%c", &ch);
    fputc(ch, fp);
    fclose(fp);
    fopen("./Files/file.txt", "r");
    ch = fgetc(fp);
    printf("The character is: %c", ch);
    fclose(fp);
}