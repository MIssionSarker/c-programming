#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int* A = new int[N];
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int M;
    std::cin >> M;

    int* B = new int[M];
    for (int i = 0; i < N; i++) {
        B[i] = A[i];
    }

    delete[] A;

    for (int i = 0; i < N + M; i++) {
        std::cout << B[i] << " ";
    }

    return 0;
}
