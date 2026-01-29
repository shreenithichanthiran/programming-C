#include<stdio.h>
int main(){
    int n,temp,d,fact,sum=0;
    scanf("%d",&n);

    for(temp=n; temp>0; temp/=10){
        d = temp % 10;
        fact = 1;

        for(int i=1;i<=d;i++)
            fact *= i;

        sum += fact;
    }

    if(sum == n) printf("Yes");
    else printf("No");

    return 0;
}