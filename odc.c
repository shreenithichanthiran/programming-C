#include<stdio.h>
int main(){
    int i,order;
    scanf("%d%d",&order,&i);
    int n=50;
    int m=100;
    switch(i){
        case 1:
            printf("%d",n);
            break;
        case 2:
            if(order<1000){
                printf("%d",m);
            }
            else{
                printf("Free");
            }
                
    }
    return 0;
}