#include <stdio.h>
int main()
{
  int n1, n2, row, col;
  scanf("%d%d", &n1, &n2);
  for (row = 1; row <= n1; row++)
  {
    for (col = 1; col <= n2; col++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
/*
3
6
******
******
******
*/