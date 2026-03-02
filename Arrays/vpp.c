#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=1;                
    for(int i=0;i<n;i++){
       if(arr[i]<=min){
        min=arr[i];
       }
    }
    if(0<=min){
        printf("%d",min);
    }                                               
    else{
        printf("No positive");
    }
    return 0;
}