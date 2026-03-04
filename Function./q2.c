#include<stdio.h>
int campare(int a,int b){
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else if(a<b){
        printf("%d is greater than %d",b,a);
    }
    else{
        printf("Both numbers are equal");
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    campare(a,b);
    return 0;
    
}