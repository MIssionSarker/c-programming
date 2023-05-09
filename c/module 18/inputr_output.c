#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{
    // declere 2d array
    int a[5][3];
    for (int i = 0; i < 5; i++)
    { // row ar upor
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    { // row ar upor
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
