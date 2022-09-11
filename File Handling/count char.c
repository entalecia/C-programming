#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("./Files/file.txt", "r");
    int count = 0;
    while(fgetc(fp) != EOF){
        count++;
    }
    printf("Number of characters in the file: %d", count);
}