#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    
    // Populate the matrix with user input
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    // Calculate the difference between the primary and secondary diagonal sums
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++) {
        sum1 += a[i][i];
        sum2 += a[i][n-1-i];
    }
    int diff = sum1 - sum2;
    if(diff < 0) {
        diff *= -1;
    }
    
    // Print the difference between the primary and secondary diagonal sums
    printf("%d\n", diff);

    return 0;
}
