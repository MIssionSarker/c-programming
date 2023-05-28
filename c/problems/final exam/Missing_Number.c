#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
int result(int s, int a, int b, int c)
{
    int sum = a + b + c;
    int miss_num = s - sum;
    return miss_num;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int s, a, b, c;
        scanf("%d %d %d %d", &s, &a, &b, &c);
        int miss_num = result(s, a, b, c);
        printf("%d\n", miss_num);
    }
    return 0;
}