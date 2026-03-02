#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],sum[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i] != sum[j]){
            sum[j]=arr[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}