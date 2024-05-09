#include <stdio.h>
int algo(int);
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", algo(n));
    return 0;
}

int algo(int n) {
    if (n == 1)
        return 1;
    return (2 * (algo(n - 1) + 1));
}