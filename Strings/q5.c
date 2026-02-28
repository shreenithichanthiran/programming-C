#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    fgets(name, sizeof(name), stdin)
    int len = strlen(name);
    if(name[len-1] == '\n'){
        name[len-1] = '\0';
        len--;
    }
    int flag = 1;
    for(int i = 0; i < len/2; i++){
        if(name[i] != name[len-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}