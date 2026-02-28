#include <stdio.h>
int main(){
    char str[100];
    int  count=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0; str[i] !='\0';i++){
        if(str[i]>=0 && str[i]<=100){
            count++;
            continue;
        }
    }
    if(count >0){
        printf("%d",count-1);
    }
    else{
        printf(0);
    }
    return 0;
}