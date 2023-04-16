#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n); // 5 index
  int ar[n];   // index 5 e thakbe
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  int pos, val;
  scanf("%d", &pos);
  for (int i = pos;i<n; i++)
  {
    ar[i] = ar[i + 1]; // samner ta pison a chole jabe
  }
  for (int i = 0; i<n-1; i++)//index 4
  {
    printf("%d ", ar[i]);
  }
  return 0;
}