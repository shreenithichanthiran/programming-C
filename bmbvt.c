#include<stdio.h>
int main(){
    int i=0;
    int lb=0;
    int n;
    int g,bal;
    scanf("%d",&n);
    scanf("%d",&bal);
    while(i<n){
        scanf("%d",&g);
            bal=bal+g;
            if(bal<2000){
                lb++;
            }
        i++;
    }
    printf(" Final Balance:%d\n",bal);
    printf(" Low Balane Day:%d",lb);
    return 0;
}