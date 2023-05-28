#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
void fun(int ar[], int n, int i, long long *sum_ptr)
{
    if (i >= n)
        return;
    *sum_ptr += ar[i];
    fun(ar, n, i + 1, sum_ptr);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    long long  sum = 0;

    fun(ar, n, 0, &sum);

    printf("%d", sum);
    return 0;
}