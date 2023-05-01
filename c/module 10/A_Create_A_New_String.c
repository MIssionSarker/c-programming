#include <stdio.h>
#include <string.h>

int main() {
    char n[1001];
    scanf("%s", n);
    char t[1001];
    scanf("%s", t);
    int st = strlen(n);
    int nt = strlen(t);
    printf("%d %d\n",st, nt);
    printf("%s %s\n", n, t);
    return 0;
}
