#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(){
    int n;
    scanf("%d", &n);
    int flag = 0;
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] + a[j] == x) {
                flag = 1;
                printf("%d + %d = Yes\n", a[i], a[j]);
            }
        }
    }
    if(flag == 0) {
        printf("No\n");
    }
    return 0;
}
