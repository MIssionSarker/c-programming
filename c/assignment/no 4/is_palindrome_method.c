#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    char *start_ptr, *end_ptr;

    start_ptr = str;
    end_ptr = str + strlen(str) - 1;

    while (start_ptr < end_ptr) {
        if (*start_ptr != *end_ptr) {
            return 0;
        }
        start_ptr++;
        end_ptr--;
    }
    return 1;
}

int main() {
    char str[100];
    scanf("%s", str);
    if(is_palindrome(str)) {
        printf("Palindrome\n", str);
    } else {
        printf("Not Palindrome\n",str);
    }
    return 0;
}

