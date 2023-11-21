#include<stdio.h>
int main(){
    int a,l,f;
    scanf("%d",&a);
  l=a%10;
  while(a>0){
      f=a%10;
      a=a/10;
  }
    
    printf("%d",l+f);
}