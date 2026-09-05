#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d\n", &n);

    FILE* out = fopen("/tmp/clines.txt", "w");
    if (out == NULL) return 1;
    char buf[1024];
    for (int i = 0; i < n; i++) {
        if (fgets(buf, sizeof(buf), stdin) != NULL) {
            fputs(buf, out);
            // Ensure a trailing newline if missing
            size_t len = strlen(buf);
            if (len > 0 && buf[len-1] != '\n') fputc('\n', out);
        }
    }
    fclose(out);

    FILE* in = fopen("/tmp/clines.txt", "r");
    if (in == NULL) return 1;
    int count = 0;

    char buffer[2048];
    while (fgets(buffer, sizeof(buffer), in)) {
        count++;
    }

    printf("lines: %d\n", count);
    fclose(in);

    return 0;
}
