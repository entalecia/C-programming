#include <stdio.h>

int main(){
    char name[20], add[20];
    int age, salary, i;
    FILE *fp;
    fp = fopen("Files/emp.txt", "w");
    for(i = 0; i < 3; i++){
        printf("Enter name, age, address and salary: ");
        scanf("%s %d %s %d", name, &age, add, &salary);
        fprintf(fp, "Name: %s, Age: %d, Address: %s, Salary: %d\n", name, age, add, salary);
    }
    fclose(fp);
}