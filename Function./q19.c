#include<stdio.h>
int power(int a,int b){
    int total=1;
    for(int i=1; i<=b;i++){
        total=total*a;
    }
    printf("%d",total);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    power(a,b);
    return 0;
}