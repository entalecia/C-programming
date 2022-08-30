#include <stdio.h>

struct emp{
    int emp_id;
    char name[20];
    int sal;
};

int main(){
    struct emp e[10], h;
    int i;
    for(i=0; i<10; i++){
        printf("Enter id and name: ");
        scanf("%d %s", &e[i].emp_id, e[i].name);
        printf("Enter salary: ");
        scanf("%d", &e[i].sal);
    }
    h = e[0];
    for(i = 0; i < 10; i++){
        if(h.sal < e[i].sal){
            h = e[i];
        }
    }
    printf("The highest salary is:");
    printf("Id: %d, Name: %s, Salary: %d", h.emp_id, h.name, h.sal);
}