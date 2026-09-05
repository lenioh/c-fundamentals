#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[100];
    fgets(buf, sizeof buf, stdin);

    int n = sizeof buf;

    for (int i = 0; i < n; i++) {
        if (buf[i] == '\n') {
            buf[i] = '\0';
            break;
        }
    }

    printf("%zu\n", strlen(buf));
    return 0;
}

