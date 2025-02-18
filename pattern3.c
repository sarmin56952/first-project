#include <stdio.h>
int main()
{
  int n, row, col;
  scanf("%d", &n);
  for (row = 1; row <= n; row++)
  {
    for (col = 1; col <= n - row; col++)
    {
      printf("  ");
    }
    for (col = 1; col <= row; col++)
    {
      printf("%d ", row);
    }
    printf("\n");
  }
  return 0;
}
/*
              1
            2 2
          3 3 3
        4 4 4 4
      5 5 5 5 5
    6 6 6 6 6 6
  7 7 7 7 7 7 7
8 8 8 8 8 8 8 8 
space=n-row

space print korar jonno     space=n-row    use korte hobe
*/
