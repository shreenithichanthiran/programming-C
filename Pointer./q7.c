#include<stdio.h>
int palindrome(char *n){
    
}
int main(){
    char str[100],rev[100];
    scanf("%s",&str);
    char *p=str;
    int s=0;
    for(int j=*p-1;0<=j;j--){
        rev[s]=p[j];
    }
    printf("%s",rev[s]);
    return 0;
    
}