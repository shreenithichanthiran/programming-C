#include<stdio.h>
int main(){
    int n,i=0;
    int pw,mw;
    int a=0;
    int pa=0;
    scanf("%d",&mw);
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&pw);
        a=a+pw;
        if(a<mw){
            pa++;
        }
        i++;
    }
    printf("Passengers Allowed:%d\n",pa);
    if(mw<a){
        printf("Overload:Yes");
    }
    else{
        printf("Overlosd:No");
    }
    return 0;
}