#include<stdio.h>
int main(){
    int n,i,count =0;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]%2==1){
            for(i=2;i<n;i++){
                if (arr[i]%2==1){
                    for(i=1;i<n;i++){
                        if(arr[i]%2==0){
                            count ++;
                        }
                    }
                }
            }
        }
        
        
    }
    printf("%d",count);
}