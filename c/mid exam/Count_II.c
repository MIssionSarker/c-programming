#include <stdio.h>
#include <string.h>

int main() {
    char a[1001];
    scanf("%s", a);
    int len = strlen(a);
    int st = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') {
            st++;
        }
    }
    printf("%d", st);
    return 0;
}