#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%400==0){
        printf("leap yer");
    }
    else {
        printf("ont a leap year");
    }
    return 0;
}
