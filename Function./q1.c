#include<stdio.h>
int interest(int P, int R, int T){
    float calculate=(P*R*T)/100;
    printf("%0.2f",calculate);
    return calculate;
}
int main(){
    int P,R,T;
    scanf("%d%d%d",&P,&R,&T);
    interest(P,R,T);
    return 0;
}
