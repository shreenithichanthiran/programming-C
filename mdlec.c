#include<stdio.h>
int main(){
    int n,i=0;
    int td,du;
    int total=0;
    int rd=0;
    int sub;
    scanf("%d",&td);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&du);
        total=total+du;
        sub=td-total;
        if(td>=total){
            rd++;
        }
        i++;
    }
    printf("Days Used:%d\n",rd);
    if(sub>0){
        printf("Remaining Data:%dGB",sub);
    }
    else{
        printf("Remaining Data:0GB");
    }
    return 0;
}