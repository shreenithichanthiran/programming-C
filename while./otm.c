#include<stdio.h>
int main(){
    int n,i=0;
    int m , e,fb=0;
    int ch=0;
    int r;
    scanf("%d",&e);
    scanf("%d",&n); 
    r=e*0.9;
    while(i<n){
        scanf("%d",&m);
        fb=fb+m;
        if(r<=fb){
            ch++;
        }
        i++;
    }
    printf("Final Occupied beds:%d\n",fb);
    printf("Critical Hours:%d",ch);
    return 0;
}