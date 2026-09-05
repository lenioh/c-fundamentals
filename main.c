#include <stdio.h>

typedef struct {
    int x, y;
} Point;

void square(int *a) {
    *a = *a * *a;
}

int main(void) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    Point x = {.x = x1, .y = y1 };
    Point y = {.x = x2, .y = y2 };
    
    int dist_x = y.x - x.x;
    int dist_y = y.y - x.y;
    square(&dist_x);
    square(&dist_y);

    printf("%d\n", (dist_x + dist_y));

    return 0;
}
