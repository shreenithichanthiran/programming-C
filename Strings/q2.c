#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int count=1;
    for(int i=0; str[i] !=0; i++){
        if(str[i]=(str[i]>='A' && str[i]<='Z')){
            count=0;
        }
    }
    if(count=0){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}