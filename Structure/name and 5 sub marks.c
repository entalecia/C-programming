#include <stdio.h>

struct stu{
    char name[20];
    int m[5];
};

int main(){
    char a[20];
    int p = 0;
    struct stu c;
    printf("Enter your name: ");
    scanf("%s", a);
    printf("Enter your marks: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &c.m[i]);
    }
    for(int i = 0; i < 5; i++){
        p += c.m[i];
    }
    printf("%s secured %d percentage", a, p/5);
}