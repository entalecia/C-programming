#include <stdio.h>

int main(){
    int y, m, d;
    int by, bm, bd;
    int cy, cm, cd; // 2078, 10, 26
    printf("Enter your birthdate in the order of Year Month Date: ");
    scanf("%d%d%d", &by, &bm, &bd);
    printf("Enter today's date in the order of Year Month Date: ");
    scanf("%d%d%d", &cy, &cm, &cd);
    if (bd > cd){
        cm -= 1;
        cd += 30;
    }

    if (bm > cm){
        cy -= 1;
        cm += 12;
    }

    y = cy - by;
    m = cm - bm;
    d = cd - bd;
    printf("You are %d Years, %d Months and %d Days.\n", y,m,d);
    return 0;
}