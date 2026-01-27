#include<stdio.h>
int main(){
    int a;
    printf("Enter the day:");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuseday");
            break;
        case 3:
            printf("Wednessday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("staturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default :
            printf("Invalid days");
    }
    return 0;
}