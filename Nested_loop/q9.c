#include<stdio.h>
int main(){
    int n;
    scanf("%d9",&n);
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int a=n; a>=0; a--){  
        for(int c=1; c<=n-a; c++){
            printf(" ");
        }
        for(int b=1; b<=2*a+1; b++){
            printf("*");
        }     
        
        printf("\n");
    }
    return 0;
}

