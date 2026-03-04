#include<stdio.h>
int circle(int a){
    float calculate=3.14*a*a;
    printf("%0.2f",calculate);
    return calculate;
}
int main(){
    int a;
    scanf("%d",&a);
    circle(a);
    return 0;
}