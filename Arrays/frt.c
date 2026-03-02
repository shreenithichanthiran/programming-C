#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                sum+=arr[j];
                b=1;
                return 0;
            }
        }
    }
    printf("%d",sum);
    return 0;
}