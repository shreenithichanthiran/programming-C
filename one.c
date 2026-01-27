#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("Five");
            break;
        default:
            printf("Invalid number");
    }
    return 0;
}