#include <stdio.h>

void copyString(char *src, char *dest){
    while(*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main(){
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);

    copyString(str1, str2);

    printf("%s", str2);

    return 0;
}