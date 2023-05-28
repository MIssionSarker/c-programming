#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tiger = 0;
    int pathan = 0;
    for (int i = 0; i < n; i++)
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1 > x2)
        {
            tiger++;
        }
        if (x1 < x2)
        {
            pathan++;
        }
    }
    if (tiger > pathan)
    {
        printf("Tiger");
    }
    else if (tiger < pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}