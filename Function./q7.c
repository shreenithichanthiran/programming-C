#include<stdio.h>
int prime(int a){
    int count=0;
    for(int i=1; i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count<=2){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }

}
int main(){
    int n;
    scanf("%d",&n);
    prime(n);
    return 0;
}