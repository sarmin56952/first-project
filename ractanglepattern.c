#include <stdio.h>
int main()
{

  int n, row, col;
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
      if (col == 1 || col == n || row == 1 || row == n)
        printf("* ");
      else
        printf("  ");
    printf("\n");
  }
  for (row = n - 1; row >= 1; row--)
  {
    for (col = 1; col <= n; col++)
      if (col == 1 || col == n || row == 1 || row == n)
        printf("* ");
      else
        printf("  ");
    printf("\n");
  }
  return 0;
}
/*
5
* * * * *
*       *
*       *
*       *
* * * * *
*       *
*       *
*       *
* * * * *
*/