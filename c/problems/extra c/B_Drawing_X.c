#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    // First line: \***/
    for (i = 1; i <= n-1; i++) {
        if (i == 1) {
            printf("\\");
        } else {
            printf("*");
        }
    }
    printf("/\n");

    // Second line: *\*/*
    printf("*");
    for (i = 1; i <= n-2; i++) {
        if (i % 2 == 1) {
            printf("\\");
        } else if(i==3){
            printf("/");
        }
        else {
            printf("*");
        }
    }
    printf("*");
    printf("\n");

    return 0;
}
