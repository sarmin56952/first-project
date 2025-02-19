#include <stdio.h>
int main()
{
  int n, row, col, count = 1;
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= row; col++)
    {
      printf("%d ", count++);
    }
    printf("\n");
  }
  return 0;
}
/*
6
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/
