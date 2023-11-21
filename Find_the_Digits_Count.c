#include<stdio.h>
int main(){
    int a,i,count=0;
    scanf("%d",&a);
  while(a>0)
    {
        i=a%10;
        count++;
        a=a/10;
        
    }
    
    printf("%d",count);
    
    
    
    
    
        
    }
    
    
    
