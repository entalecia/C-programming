#include <stdio.h>
#include <string.h>

int main(){
    char a[100], t;
    int al=0, d=0, sp=0;
    int i;
    printf("Enter your string: ");
    scanf("%s", &a);
    for(i = 0; i < strlen(a); i++){
        t = a[i];
        if((t >= 'a' && t <= 'z') || (t >= 'A' && t <= 'Z')){
            al++;
        }
        else if(t >= '0' && t <= '9'){
            d++;
        }
        else{
            sp++;
        }
    }
    printf("Alphabets: %d, Digits: %d, Special: %d ", al,d,sp);
    return 0;
}