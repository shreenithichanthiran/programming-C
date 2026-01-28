#include<stdio.h>
int main(){
    int a,m=0;
    scanf("%d",&a);
    for(int i=0; a!=0 ;i++){
        a=a/10;
        m++;
    }
    printf("%d",m);
}