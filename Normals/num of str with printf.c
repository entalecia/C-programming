#include <stdio.h>

int main(){
    char a[30];
    int len = 0;
    printf("Enter string: ");
    scanf("%s", &a);
    printf("%s%n", a, &len);
    printf(" is of length %d\n", len);
    return 0;
    /// ALTERNATIVE METHOD IS len = printf(a);
}