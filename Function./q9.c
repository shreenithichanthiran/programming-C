#include<stdio.h>
int rev(int n,int sum,int digit,int m){

    while(n>0){
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(m==sum){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}
int main(){
    int n,sum=0,digit;
    scanf("%d",&n);
    int m=n;
    rev(n,sum,digit,m);
    return 0;
}