#include<stdio.h>
int sum(int a){
    int cal=1;
    for(int i=a; i>=1; i--){
        //printf("%d\n",a);
        cal=cal*a;
        a=a-1;
        continue;
    }
    printf("%d",cal);
    return cal;
}
int main(){
    int a;
    scanf("%d",&a);
    sum(a);
    return 0;
}