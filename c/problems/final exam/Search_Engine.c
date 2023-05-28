#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // number of test cases

    for (int testCase = 1; testCase <= T; testCase++) {
        int N;
        scanf("%d", &N); // size of the list

        int list[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &list[i]); // input the list values
        }

        int S;
        scanf("%d", &S); // number to find

        int position = -1; // initialize the position as -1 (not found)

        for (int i = 0; i < N; i++) {
            if (list[i] == S) {
                position = i + 1; // position found, update the variable
                break; // no need to search further, break the loop
            }
        }

        if (position != -1) {
            printf("Case %d: %d\n", testCase, position);
        } else {
            printf("Case %d: Not Found\n", testCase);
        }
    }

    return 0;
}
