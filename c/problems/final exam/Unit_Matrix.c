#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int flag = 1;
    if (n < 0) {
        flag = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (mat[i][j] != 1) {
                    flag = 0;
                }
            } else if (mat[i][j] != 0) {
                    flag = 0;
            }
        }
    }
    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
