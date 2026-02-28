#include<stdio.h>
int main(){
    char str[100];
    char a[100];
    fgets(str,sizeof(str),stdin);
    int i;
    for(i=0; str[i] !='\0';i++){
            a[i]=str[i];
    }
    a[i]='\0';
    printf("%s",a);
    return 0;
}