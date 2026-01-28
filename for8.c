#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    for(int i=0;a!=0;i++){
        b=b*10+(a%10);
        a=a/10;
    }
    printf("%d",b);
    return 0;
}   