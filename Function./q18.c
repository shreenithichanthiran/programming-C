#include<stdio.h>
void gcd(int a,int b){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0 && b%i==0){
            if(sum<i){
                sum=i;

            }
        }
    }
    printf("%d ",sum);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    gcd(a,b);
}