#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
     for(int i=0;i<row ;i++){
         for(int j=0;j<col ;j++){
            if(i==j){
                continue;
            }
            if(a[i][j]){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("primary diagonal");
    }
    else{
        printf("Not Diagonal");
    }

    return 0;
}