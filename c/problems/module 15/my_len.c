#include <stdio.h>

int my_len(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[100];
    scanf("%s", str);
    int len = my_len(str);
    printf("%d\n", len);
    return 0;
}
