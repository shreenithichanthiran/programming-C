#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%3==0 && a%7==0){
        printf("Multiple of both 3 and 7");
    }
    else if(a%3==0){
        printf("Multiple by 3");
    }
    else if (a%7==0){
        printf("Multiple by 7");
    }
    else{
        printf(" Not Multiple of both");
    }
}