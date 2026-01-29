#include<stdio.h>
int main(){
    int a,b,lcm;
    scanf("%d%d",&a,&b);

    for(int i=1;;i++){
        if((a*i)%b==0){
            lcm=a*i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}