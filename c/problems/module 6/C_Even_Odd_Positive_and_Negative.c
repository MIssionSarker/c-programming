#include <stdio.h>

int main() {
    int n, x, even=0, odd=0, pos=0, neg=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0) {  // check if the number is even
            even++;
        } else {  // number is odd
            odd++;
        }
        if (x > 0) {  // check if the number is positive
            pos++;
        } else if (x < 0) {  // number is negative
            neg++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    return 0;
}
