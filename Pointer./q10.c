#include<stdio.h>
void space(char str[]){
    char *p=str;
    int count =1;
    while(*p!='\0'){
        if(*p==' '){
            count++;
        }
        p++;
    }
    printf("%d",count);
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    space(str);
    return 0;
}