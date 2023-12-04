#include<stdio.h>
int main(){
    int a,reverse=0,r;
    scanf ("%d",&a);
    int temp=a;
   
    while(temp>0){
         r=temp%10;
         temp=temp/10;
         reverse=reverse*10+r;
       
       
    }
if(reverse==a){
           printf("True");
       }
       else {printf("False");
}
}