#include <stdio.h>

int main() {
    int n, i = 0;
    int noise;
    int violations = 0;
    int current_streak = 0;
    int max_streak = 0;  

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &noise);

        if (noise > 70) {
            violations = violations + 1;
            current_streak = current_streak + 1;

            if (current_streak > max_streak) {
                max_streak = current_streak;
            }
        } else {
            current_streak = 0;
        }

        i = i + 1;
    }

    printf("Noise Violations: %d\n", violations);
    printf("Longest Violation Streak: %d\n", max_streak);

    return 0;
}
