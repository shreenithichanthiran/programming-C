#include<stdio.h>
int main(){
    int a;
    float m;
    scanf("%d",&a);
    scanf("%f",&m);
    switch(a){
        case 1:
            if(m<=1){
                printf("Normal speed");
            }
            else if(m>1){
                printf("speed reduced");
            }
            break;
        case 2:
            if(m<=2){
                printf("Normal speed");
            }
            else if(m>2){
                printf("Extra charges applied");
            }
            break;
    }
    return 0;
}