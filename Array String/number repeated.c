#include <stdio.h>

int main(){
    int a[10],i,t,j,b[10],k,c;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        t = 0;
        c = 0;
        for(k=0;k<10;k++){
            if(a[i] == b[k]){
                c=1;
            }
        }
        for(j=i+1;j<10;j++){
            if(c==1){
                continue;
            }
            if(a[i] == a[j]){
                t++;
                b[i] = a[j];
            }
        }
        if(c==0){
        printf("%d is repeated %d times\n",a[i],t);}
    }
}