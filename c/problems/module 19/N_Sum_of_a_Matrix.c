#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    // matrix
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
                int br[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &br[i][j]);
            }
        }
            int cr[n][m];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cr[i][j] = ar[i][j] + br[i][j];
                    printf("%d ", cr[i][j]);
                }
                printf("\n");
            }
            return 0;
        }