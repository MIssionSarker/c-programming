#include <stdio.h>

void countCharacters(char S[], int *c, int *sc, int *spc) {
    int i = 0;
    while (S[i] != '\0') {
        if ('A' <= S[i] && S[i] <= 'Z') {
            (*c)++;
        } else if ('a' <= S[i] && S[i] <= 'z') {
            (*sc)++;
        } else if (S[i] == ' ') {
            (*spc)++;
        }
        i++;
    }
}

int main() {
    char S[1001];
    fgets(S, sizeof(S), stdin);

    int c = 0, sc = 0, spc = 0;
    countCharacters(S, &c, &sc, &spc);

    printf("Capital - %d\n", c);
    printf("Small - %d\n", sc);
    printf("Spaces - %d\n", spc);

    return 0;
}
