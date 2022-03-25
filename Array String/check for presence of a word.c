#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "This is orange juice.";
    char req[] = "orange";
    int i, j, k = 0;
    for(i = 0; i <= strlen(a); i++){
        if(a[i] == req[0]){
            k = 0;
            for(j = 0; j <= strlen(req); j++){
                if(a[i+j] != req[j]){
                    break;
                }
                k++;
            }
            if (k >= strlen(req)){
                printf("Found.");
                return 0;
            }
        }
    }
    printf("not found");
    return 0;
}
