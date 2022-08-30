#include <stdio.h>
#include <string.h>

struct stu{
    char name[20];
    char address[20];
};

int main(){
    struct stu s[10], temp;
    int i, j;
    for(i=0; i<10; i++){
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter address: ");
        scanf("%s", s[i].address);
    }
    for(i=0; i<10; i++){
        for(j = i; j < 10; j++){
            if(strcmp(s[i].name, s[j].name) > 0){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(i=0; i<10; i++){
        printf("\nName: %s, Address: %s\n", s[i].name, s[i].address);
    }
}