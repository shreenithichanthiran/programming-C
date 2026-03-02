#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int str=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(str<arr[i]){
            str=arr[i];
            count++;
        }
    }
    printf("%d",count);
    return 0;
}