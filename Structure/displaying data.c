#include <stdio.h>

struct students{
    int roll_no;
    char f_name[20];
    char l_name[20];
};

int main(){
    struct students s;
    printf("Enter roll no: ");
    scanf("%d", &s.roll_no);
    printf("Enter first name: ");
    scanf("%s", s.f_name);
    printf("Enter last name: ");
    scanf("%s", s.l_name);
    printf("\nRoll no: %d, Name: %s %s\n", s.roll_no, s.f_name, s.l_name);
}