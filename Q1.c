#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    //printf("%d",a);
    if(a>0){
        printf("positive number");
    }
    else if(a<0){
        printf("negative number");
    }
    else{
        printf("zero");
    }
    return 0;
}
