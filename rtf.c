#include<stdio.h>
int main(){
    int m,a,c;
    int n=300;
    c=1000;
    scanf("%d%d",&m,&a);
    switch(m){
        case 1:
            if(0<a && a>12){
                printf("%d",n/0.24);
            }
            else if(a>60){
                printf("%d",n/0.33);
            }
            else{
                printf("%d",n);
            }
            break;
        case 2:
            if(0<a && a>12){
                printf("%d",c/50);
            }
            else{
                printf("%d",c);
            }
            break;
    }
    return 0;
}