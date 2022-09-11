#include <stdio.h>

int main(){
    FILE *fp;
    char ch[20];
    fp = fopen("./Files/file.txt", "w");
    printf("Enter a string: ");
    scanf("%s", ch);
    fputs(ch, fp);
    fclose(fp);
    fopen("./Files/file.txt", "r");
    fgets(ch, 20, fp);
    printf("The string is %s", ch);
    fclose(fp);
}