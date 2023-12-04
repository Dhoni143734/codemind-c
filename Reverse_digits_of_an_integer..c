#include<stdio.h>
int main(){
    int a,l,res=0;
    scanf("%d",&a);
   while(a>0){
       l=a%10;
       a=a/10;
       res=res*10+l;
       
   }
   printf("%d",res);
}