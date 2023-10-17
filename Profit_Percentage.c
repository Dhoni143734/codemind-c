#include<stdio.h>
int main(){
    float cp,sp,p;
    float n;
    scanf("%d %d",&cp,&sp);
    p = sp-cp;
    n = p*100/cp;
    printf("%.2f",n);
}