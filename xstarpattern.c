#include <stdio.h>
int main()
{
  int n, row, col;
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n; col++)
      if (row == col || col + row == n + 1)
        printf("*");
      else
        printf(" ");
    printf("\n");
  }
  return 0;
}