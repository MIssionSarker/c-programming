#include <stdio.h>

void print(int n, int i) {
    if (i == 0) return;
    printf("%d", i);
    if (i != 1) {
        printf(" ");
    } else {
        printf("\n");
    }
    print(n, i - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    print(n, n);
    return 0;
}
