#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("Files/file.txt", "a");
    printf("Enter your string: ");
    char ch[10];
    scanf("%s", ch);
    fputs(ch, fp);
    fclose(fp);
}