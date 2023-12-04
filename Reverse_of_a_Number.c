#include<stdio.h>
int main(){
    int a,i,r,re;
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        
        a=a/10;
          printf("%d",r);
    }
    
}