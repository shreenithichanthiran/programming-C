#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int a=n; a>0; a--){
        for(int b=1; b<a+1; b++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
