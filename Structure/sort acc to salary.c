#include <stdio.h>

struct emp{
    int emp_id;
    char name[20];
    int sal;
};

int main(){
    struct emp e[10], temp;
    int i, j;
    for(i=0; i<10; i++){
        printf("Enter id and name: ");
        scanf("%d %s", &e[i].emp_id, e[i].name);
        printf("Enter salary: ");
        scanf("%d", &e[i].sal);
    }
    for(i=0; i<10; i++){
        for(j = i; j < 10; j++){
            if(e[i].sal < e[j].sal){
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    for(i=0; i<10; i++){
        printf("Id: %d, Name: %s, Salary: %d\n", e[i].emp_id, e[i].name, e[i].sal);
    }
}