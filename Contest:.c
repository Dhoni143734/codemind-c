#include<stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d %d",&x,&a,&b);
   
    if ((a+(b*2))>=x)
    {
        printf("Qualify");
    }
    else if(a+b*2<x)
    {
        printf("Not Qualify");
    }
}