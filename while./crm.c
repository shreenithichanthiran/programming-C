#include<stdio.h>
int main(){
    int n,i=0;
    int d;
    int suc=0;
    int can=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&d);
        if(d==1){
            suc++;
        }
        else if(d==0){
            can++;
        }
        i++;
    }
    printf("Successful:%d\n",suc);
    printf("Cancelled:%d\n",can);
    if(suc>=can){
            printf("Status:Safe");
        }
        else {
            printf("Risk");    
        }
    return 0;
}