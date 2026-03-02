#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n], rev[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=n-1; i>=0;i--){
        rev[j] = arr[i];
        j++;
    }
    int b=1;
    for(int i=0;i<n;i++){
        if(rev[i] != arr[i]){
            b=0;
            break;
        }
    }
    if(b==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}