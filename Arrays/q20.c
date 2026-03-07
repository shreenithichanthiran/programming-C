#include<stdio.h>
void menu(int a, int b, char c){
    switch(c){
        case '+':
            printf("%d Addition",a+b);
            break;
        case '-':
            printf("%d Subtraction",a-b);
            break;
        case '*':
            printf("%d Multiplication",a*b);
            break;
        case '%':
            printf("%d Modulus",a%b);
            break;
    }
}
int main(){
    int a,b;
    char c;
    scanf("%d%d %c",&a,&b,&c);
    menu(a,b,c);
    return 0;
}