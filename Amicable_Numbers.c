#include<stdio.h>
int main(){
    int a,b,i=1,j=1,res_1=0,res_2=0;
    scanf("%d %d",&a,&b);
   for(i=1;i<a;i++)
        if(a%i==0){
       res_1=res_1+i;
    }
    for(j=1;j<b;j++){
        if(b%j==0){
         res_2=res_2+j;
        }

    }if(res_1==b && res_2==a)printf("Amicable");
        else printf("Not Amicable");

}
