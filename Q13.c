#include<stdio.h>
int main(){
    char a;
    printf("Enter the charegter:");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("Uppercase leter");
    }
    else{
        printf("Lowercase leter");
    }
}