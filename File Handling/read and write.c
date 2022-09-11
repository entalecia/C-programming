#include <stdio.h>
struct student{
    int roll;
    char name[20];
    float percentage;
};

int main(){
    struct student s;
    FILE *fp;
    fp = fopen("Files/anotherfile.txt", "w");
    printf("Enter the roll, name and percentage: ");
    scanf("%d %s %f", &s.roll, s.name, &s.percentage);
    fprintf(fp, "%d %s %.2f", s.roll, s.name, s.percentage);
    fclose(fp);
    fp = fopen("Files/anotherfile.txt", "r");
    fscanf(fp, "%d %s %f", &s.roll, s.name, &s.percentage);
    printf("Roll: %d, Name: %s, Percentage: %.2f", s.roll, s.name, s.percentage);
    fclose(fp);
}