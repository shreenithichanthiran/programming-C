#include<stdio.h>
int main(){
    int n,rev=0,temp;
    scanf("%d",&n);
    temp=n;

    for(; n>0; n/=10){
        rev = rev*10 + n%10;
    }
    if(rev==temp)
        printf("Yes");
    else
        printf("No");
    return 0;
}