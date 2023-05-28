 #include <stdio.h>
 #include <string.h>
 #include <math.h>
 #include <time.h>
 #include <limits.h>
 void max(int n, int a[], int i, int max_val) {
    if (i == n) {
        printf("%d\n", max_val);
        return;
    }
    if (a[i] > max_val) {
        max_val = a[i];
    }
    max(n, a, i + 1, max_val);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max(n, a, 0, INT_MIN);

    return 0;
}
