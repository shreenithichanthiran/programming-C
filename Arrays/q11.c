#include<stdio.h>
int cal(int n,int digit,int sum,int count){
    while(n>0){
        digit=n%10;
        sum=sum*10+digit;
        count++;
        n=n/10;
    }
    printf("%d",count);
    return count;
}
int main(){
    int n,sum=0,digit;
    scanf("%d",&n);
    int count=0;
    cal(n,sum,digit,count);
    return 0;
}