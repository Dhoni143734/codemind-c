#include<stdio.h>
int main(){
    int a,i,r=0;
    scanf("%d",&a);
    while(a!=0){
        i=a%10;
        if(i>r){
            r=i;


        }
        a=a/10;

    }
printf("%d",r);
}
