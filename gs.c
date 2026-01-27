#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the mark:");
    scanf("%d",&a);
    b=a/10;
    switch (b){
        case 9:         
            printf("Grade A");
            break;
        case 8:           
            printf("Grade B");
            break;
        case 7:         
            printf("Grade C");
            break;
        case 6:         
            printf("Grade D");
            break;
        case 5:           
            printf("Grade E");
            break;
        case 4:         
            printf("Grade Fs");
            break;
        default :
            printf("Supplementary");
    }
    return 0;
}