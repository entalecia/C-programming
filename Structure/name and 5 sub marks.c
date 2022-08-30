#include <stdio.h>

struct stu{
    char name[20];
    int m[5];
};

int main(){
    int p = 0;
    struct stu c;
    printf("Enter your name: ");
    scanf("%s", c.name);
    printf("Enter marks of 5 subs: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &c.m[i]);
    }
    for(int i = 0; i < 5; i++){
        p += c.m[i];
    }
    printf("%s secured %d percentage", c.name, p/5);
}