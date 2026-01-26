#include<stdio.h>
int main(){
    char a;
    printf("Enter the leter:");
    scanf("%c",&a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||
        a=='a'||a=='i'||a=='o'||a=='u'||a=='e'){
        printf("Vowel");
    }
    else {
        printf("No a vowel");
    }
    return 0;
}
