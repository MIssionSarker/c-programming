#include <stdio.h>

void array(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i != n) {
            printf(" ");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    array(n);
    return 0;
}
