#include <stdio.h>

struct stu{
    char name[20];
    int marks;
};

int main(){
    struct stu s[10], temp;
    int i, j;
    for(i=0; i<10; i++){
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    for(i=0; i<10; i++){
        for(j = i; j < 10; j++){
            if(s[i].marks < s[j].marks){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(i=0; i<10; i++){
        printf("\nName: %s, Marks: %d\n", s[i].name, s[i].marks);
    }
}