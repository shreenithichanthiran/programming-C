#include<stdio.h>
int table(int n){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum=n*i;
        printf("%d*%d=%d\n",n,i,sum);
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}