#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // read input from user and store in n
    int k = n; // initialize k to n
    for (int i = 0; i < n; i++) {
        for (int j = k ; j > 0; j--) { // count down from k to 1
            printf("*");
        }
        printf("\n");
        k--;
    }

    return 0;
}
