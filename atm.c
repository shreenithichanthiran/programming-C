#include<stdio.h>
int main(){
    int a;
    int bal,wid;
    scanf("%d%d%d",&a,&bal,&wid);
    switch(a){
        case 1:
            if (bal>=wid){
                printf("Transaction Successfull");
            }
            else{
                printf("we can withdrawal the amount");
            }
            break;
        case 2:
            if(wid==5000){
                printf("Transaction Successfull");
            }
            else{
                printf("we can withdrawal the amount");
            }
    }
    return 0;

}