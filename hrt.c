#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    switch(a){
        case 1:
            if(A){
                printf("2500");
            }
            else{
                printf("2000");
            }
            break;
        case 2:
            if(C){
                printf("4000");
            }
            else if(D){
                printf("3000");
            }
            break;
    }
    return 0;
    
}