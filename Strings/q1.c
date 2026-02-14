#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length=0;
    for(int i=0; str[i]!=0; i++){
            length++;
    }
    printf("%d",length-1);
    return 0;
}
