#include<stdio.h>
int rev(int n,int sum,int digit){
    while(n>0){
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    printf("%d",sum);
    return sum;
}
int main(){
    int n,sum=0,digit;
    scanf("%d",&n);
    rev(n,sum,digit);
    return 0;
}