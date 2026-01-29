#include<stdio.h>
int main(){
    int n,temp,sum=0,d;
    scanf("%d",&n);

    for(temp=n; temp>0; temp/=10){
        d = temp % 10;
        sum += d*d*d;
    }

    if(sum == n) printf("Yes");
    else printf("No");

    return 0;
}