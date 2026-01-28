#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        m+=i;
    }
    printf("%d",m);
    return 0;
}

/*#include <stdio.h>
int main() {
    int N, sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}*/