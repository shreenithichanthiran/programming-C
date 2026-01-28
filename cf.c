#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int A=5000;
    int B=9000;
    switch(a){
        case 1:
            if(A){
                printf("%d",A);
            }
            else if(B){
                printf("%d",B);
            }
            break;
    }
    return 0;
}