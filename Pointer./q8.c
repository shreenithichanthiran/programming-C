#include<stdio.h>
#include<string.h>
void palindrome(char str[]){
    char *start = str;
    char *end = str + strlen(str) - 1;
    while(start < end){
        if(*start != *end){
            printf("No");
            return;
        }
        start++;
        end--;
    }
    printf("Yes");
}
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';  
    palindrome(str);
    return 0;
}