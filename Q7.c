#include<stdio.h>
int main(){
    char a;
    printf("Enter the leter:");
    scanf("%c",&a);
    if(a>='a'&&a<='z' || a>='A'&&a<='Z'){
        printf("Alphabet");
    }
    else if(a>='0'&& a<='9'){
        printf("Digit");
    }
    else{
        printf("special character");
    }
    return 0;
}
