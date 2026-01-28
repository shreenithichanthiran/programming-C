#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int i=100;
    int j=800;
    int h=240;
    int g=h*b;
    switch(a){
        case 1:
            if(b==1){
                printf("%d",i);
            }
            else if(2<b){
                printf(" monthly pass %d",j);
            }
            break; 
        case 2:
             printf("%d",g);
             break;
    }
    return 0;
}