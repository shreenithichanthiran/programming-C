#include<stdio.h>
int main(){
    int n,i=0;
    int r;
    int b=0;
    int ld=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&r);
        if(r==0){
            b++;
            if(b>ld){
                ld=b;
            }
        }
        else{
            b=0;
        }
        i++;
    }
    printf("Longest Default Streak:%d",ld);
    return 0;
}