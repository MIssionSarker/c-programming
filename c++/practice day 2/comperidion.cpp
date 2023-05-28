#include <iostream>

int main() {
    int A, B;
    char S;

    std::cin >> A >> S >> B;

    // Perform the comparison and print the result
    if (S == '<') {
        if (A < B) {
            std::cout << "Right" << std::endl;
        } else {
            std::cout << "Wrong" << std::endl;
        }
    } else if (S == '>') {
        if (A > B) {
            std::cout << "Right" << std::endl;
        } else {
            std::cout << "Wrong" << std::endl;
        }
    } else if (S == '=') {
        if (A == B) {
            std::cout << "Right" << std::endl;
        } else {
            std::cout << "Wrong" << std::endl;
        }
    } else {
        std::cout << "Invalid sign input." << std::endl;
    }

    return 0;
}
