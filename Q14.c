#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%11==0){
        printf("Divisible by 11");
    }
    else{
        printf("Not divisible by 11");
    }
}