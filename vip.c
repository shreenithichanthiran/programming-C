#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    switch(a){
        case 1:
            if(b<=5){
                printf("1500");
            }
            else if(b>5){
                printf("2500");
            }
            break;
        case 2:
            if(b<=5){
                printf("4000");
            }
            else if(b>5){
                printf("6000");
            }
            break;
    }
    return 0;
}