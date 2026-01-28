#include<stdio.h>
int main(){
    int n,k=0;
    scanf("%d",&n);
    for(int i=0; i<=n;i++){
        if(i%2==0){
            k=k+i;
        }
    }
    printf("%d",k);
    return 0;
}