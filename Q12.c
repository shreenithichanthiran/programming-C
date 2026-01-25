#include <stdio.h>
int main(){
    int a=10;
    int b=20;
    int c;
    printf("%d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    return 0;
}