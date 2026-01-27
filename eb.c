#include <stdio.h>

int main() {
    int a, b;
    int bill = 0;
    scanf("%d%d", &a, &b);
    switch(a) {
        case 1:
            if (b>0 && b<=100) {
                bill = b*3;
            }
            else if (b>100) {
                bill = (100*3) + (b-100) *5;
                bill = bill - 80; 
            }
            break;
        case 2: 
            if (b>0 && b<=100) {
                bill = b * 7;
            }
            else if (b>100) {
                bill = (100*7)+(b-100) *10;
            }
            break;
        default:
            printf("Invalid connection type");
            return 0;
    }
    printf("Bill %d", bill);
    return 0;
}
