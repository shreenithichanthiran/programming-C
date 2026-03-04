#include<stdio.h>
int sum(int a,int digit){
    int cal=0;
    while(a>0){
        digit=a%10;
        cal=cal+digit;
        a=a/10;
    }
    printf("%d",cal);
    return cal;
}
int main(){
    int a,digit;
    scanf("%d",&a);
    sum(a,digit);
    return 0;
}