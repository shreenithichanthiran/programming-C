#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    switch(a){
        case 1:
            if(b>=700){
                printf("Approved");
            }
            else if(b<700 && b>=650){
                printf("Manual review");
            }
            break;
        case 2:
            if(b>=700){
                printf("Approved");
            }
            else if(b<700 ){
                printf("Rejected");
            }
            break;
    }
    return 0;
}