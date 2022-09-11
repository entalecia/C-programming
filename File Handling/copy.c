#include <stdio.h>

int main(){
    FILE *fp, *fp1;
    char ch[20];
    fp = fopen("./Files/file.txt", "r");
    fp1 = fopen("./Files/newfile.txt", "w");
    fgets(ch, 20, fp);
    fputs(ch, fp1);
    fclose(fp);
    fclose(fp1);
    printf("Data copied successfully.");
}