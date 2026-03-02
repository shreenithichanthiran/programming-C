#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sto[n],exl[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n;i++){
        if(arr[i]==0){
            sto[i]=arr[i];
        }
        else{
            exl[i]=arr[i];
        }
    }
    printf("%d%d",exl,sto);
    return 0;
}