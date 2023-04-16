#include <stdio.h>

int main() {
    // Read input
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    // Calculate the largest number of Katryoshkas that can be made
    long long dolls = 0;

    // Find the minimum count among eyes, mouths, and bodies
    long long min_count = (n < m) ? n : m;
    min_count = (min_count < k) ? min_count : k;

    // If the minimum count is 0, no Katryoshkas can be made
    if (min_count == 0) {
        dolls = 0;
    } else {
        // Calculate the dolls using two eyes and one body
        dolls = min_count;

        // Update the counts of eyes, mouths, and bodies after making dolls with two eyes and one body
        n -= min_count;
        m -= min_count;
        k -= min_count;

        // Calculate the dolls using two eyes, one mouth, and one body
        dolls += (n / 2);

        // Calculate the dolls using one eye, one mouth, and one body
        dolls += (m / 2);

        // Print the result
        printf("%lld\n", dolls);
    }

    return 0;
}
