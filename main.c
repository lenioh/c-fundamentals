#include <stdio.h>

int square(int n) {
    return n * n;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", square(n));
    return 0;
}
