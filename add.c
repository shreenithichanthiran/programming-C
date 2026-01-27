#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Enter options:\n");
    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.mul\n");
    printf("4.Div\n");
    int c;
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("%d value of addition:",a+b);
            break;
        case 2:
            printf("%d value of substraction:",a-b);
            break;
        case 3:
            printf("%d value of multiplication:",a*b);
            break;
        case 4:
            printf("%d value of division:",a/b);
            break;
        defauld :
            printf("Invalid number");    
    }
    return 0;
}