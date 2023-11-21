#include<stdio.h>
int main(){
    int a,da,hra;
    float gross;
    scanf("%d",&a);
    if(a<=10000){
        da=a*0.8;
        hra=a*0.2;
        gross=a+da+hra;
        printf("%.2f",gross);
    }
    else if(a<=20000){
        da=a*0.9;
        hra=a*0.25;
        gross=a+da+hra;
        printf("%.2f",gross);
        }
    else if(a>20000){
        da=a*0.95;
        hra=a*0.3;
        gross=a+da+hra;
        printf("%.2f",gross);
    }
    
    
    
}