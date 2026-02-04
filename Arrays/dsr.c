#include <stdio.h>

int main() {
    int size, prev, curr;
    int sorted = 1;

    scanf("%d", &size);

    if (size <= 0) {
        printf("No");
        return 0;
    }

    scanf("%d", &prev);   // read first element

    for (int i = 1; i < size; i++) {
        scanf("%d", &curr);
        if (prev > curr) {
            sorted = 0;
            break;
        }
        prev = curr;
    }

    if (sorted)
        printf("Yes");
    else
        printf("No");

    return 0;
}
