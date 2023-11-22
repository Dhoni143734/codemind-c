#include<stdio.h>
int main(){
    int a,i,b,c,s=0;
    scanf("%d",&a);
    b=a*a;
    while(b>0){
        c=b%10;
        s+=c;
        b=b/10;
    }
    if(a==s){
        printf("Neon Number");
    }
    else printf("Not Neon Number");
    
}