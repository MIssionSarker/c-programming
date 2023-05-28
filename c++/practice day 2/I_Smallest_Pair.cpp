#include <iostream>
#include <climits>

using namespace std;

// Function to find the smallest possible result
int smallest_sum(int arr[], int n) {
    int min_sum = INT_MAX;  // Initialize with maximum integer value

    // Iterate over all pairs of indices (i, j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int curr_sum = arr[i] + arr[j] + j - i;
            min_sum = min(min_sum, curr_sum);
        }
    }

    return min_sum;
}

// Main function
int main() {
    int t;
    cin >> t;  // Number of test cases

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;  // Number of elements

        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];  // Input array elements
        }

        int result = smallest_sum(arr, n);
        cout << result << endl;
    }

    return 0;
}