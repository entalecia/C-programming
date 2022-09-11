#include <stdio.h>

int main(){
    FILE *fp;
    char a;
    fp = fopen("Files/abc.bin", "wb");
    fclose(fp);
    printf("abc.bin created!\n");
    scanf("%c", &a);
    rename("Files/abc.bin", "Files/xyz.bin");
    printf("Renamed to xyz.bin\n");
    scanf("%c", &a);
    remove("Files/xyz.bin");
    printf("Deleted xyz.bin");
}