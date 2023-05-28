#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

void swap_it(int *x, int *y) {
    int tmp = *y;
    *y = *x;
    *x = tmp;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap_it(&x, &y);
    printf("%d %d", x, y);
    return 0;
}
