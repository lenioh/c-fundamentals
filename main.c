#include <stdio.h>

/* TODO: define CUBE(x) here — no trailing semicolon on a #define. */
#define CUBE(x) ((x) * (x) * (x))

int main(void) {
    int n;
    scanf("%d", &n);

    /* TODO: print   <n> cubed is <n cubed>   followed by a newline. */
    printf("%d cubed is %d\n", n, CUBE(n));

    return 0;
}
