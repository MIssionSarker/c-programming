#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n); // 5 index
  int ar[n + 1];   // index 6 korar jonno
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &ar[i]);
  }
  int pos, val;
  scanf("%d%d", &pos, &val);
  for (int i = n; i >= pos + 1; i--)
  {
    ar[i] = ar[i - 1]; // ager index ar value ta samner index a chole gess
  }
  ar[pos] = val;
  for (int i = 0; i <= n; i++)
  {
    printf("%d ", ar[i]);
  }
  return 0;
}