#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        while (n) {
            printf("%lld ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}
