#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    int counts[26] = {0}; 
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        int x = s[i] - 'a';
        counts[x]++;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a'+i, counts[i]);
    }
    return 0;
}
