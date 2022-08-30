#include <stdio.h>

struct stu{
    char name[20];
    int age;
};

int main(){
    struct stu s[10], temp;
    int i, j;
    for(i=0; i<10; i++){
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
    for(i=0; i<10; i++){
        for(j = i; j < 10; j++){
            if(s[i].age < s[j].age){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(i=0; i<10; i++){
        printf("\nName: %s, age: %d\n", s[i].name, s[i].age);
    }
}