#include<stdio.h>
int main(){
    int n,i=0;
    int r,s,w;
    int total=0;
    int ct=0;
    scanf("%d",&r);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&s);
        if(r>=total){
            total=total+s;
            ct++;
        }
        w=r-total;
        i++;
    }
    printf("Completed Trips:%d\n",ct);
    printf("Remaining Fuel:%d\n",w);
    printf("%d",total);
    return 0;
}