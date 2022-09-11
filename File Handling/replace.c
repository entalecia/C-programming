#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("Files/file.txt", "r+");
    fseek(fp, 10, SEEK_SET);
    char ch[10];
    printf("Enter with character you want to replace: ");
    scanf("%s", ch);
    fputs(ch, fp);
    fclose(fp);

}