#include <stdio.h>
#include <string.h>

int main(){
    char a[100], lc[26] = {0}, uc[26] = {0};
    printf("Enter your string: ");
    fgets(a,100,stdin);
    int i, b;
    for (i = 0; i < strlen(a); i++){
        if (a[i] >= 'a' && a[i] <= 'z'){ // 'b'
            b = a[i] - 'a'; // 98 - 97 = i
            lc[b]++;
        }
        if (a[i] >= 'A' && a[i] <= 'Z'){
            b = a[i] - 'A';
            uc[b]++;
        }
    }
    for(i = 0; i < 26; i++){
        if (lc[i] != 0){
            printf("%c = %d\n", i + 'a', lc[i]); // 1 + 97 = 'b'
        }
        if (uc[i] != 0){
            printf("%c = %d\n", i + 'A', uc[i]);
        }
    }
}