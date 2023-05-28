#include <stdio.h>

void print_even_reversed(int arr[], int n, int i)
{
    // Base case: if we've gone beyond the end of the array
    if (i >= n)
    {
        return;
    }

    // Recursive case: print the even indices in reverse order
    print_even_reversed(arr, n, i + 2);
    printf("%d ", arr[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_even_reversed(arr, n, 0);
    printf("\n");

    return 0;
}
// logic behind this code is if i give the logic befor the code  it will print reverse
