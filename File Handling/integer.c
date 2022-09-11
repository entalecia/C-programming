#include <stdio.h>

int main(){
    FILE *fp;
    int n;
    fp = fopen("./Files/file.txt", "w");
    printf("Enter a number: ");
    scanf("%d", &n);
    putw(n, fp);
    fclose(fp);
    fopen("./Files/file.txt", "r");
    n = getw(fp);
    printf("The number is: %d", n);
    fclose(fp);
}