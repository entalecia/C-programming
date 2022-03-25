#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b, count[26] = {0};
    printf("Enter your string: ");
    scanf("%s", &a);
    int i, j, f;
    for (i = 0; i < strlen(a); i++){
        if (a[i] >= 'a' && a[i] <= 'z'){ // 'b'
            b = a[i] - 'a'; // 98 - 97 = i
            count[b]++;
        }
    }
    for(i = 0; i < 26; i++){
        if (count[i] != 0){
            printf("%c = %d\n", i + 'a', count[i]); // 1 + 97 = 'b'
        }
    }
}