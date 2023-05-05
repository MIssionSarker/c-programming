#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str[100];
    scanf("%s", str);
    if (is_palindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}
