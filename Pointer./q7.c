#include<stdio.h>
#include<string.h>
void reverse(char str[]){
    char *p=str;
    char *a=p+strlen(p)-1;
    while(a>=p){
        printf("%c",*a);
        a--;
    }
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    reverse(str);
    return 0;
}