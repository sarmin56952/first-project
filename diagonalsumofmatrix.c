#include <stdio.h>
int main()
{
  int a[10][10], row, col, i, j, sum = 0;
  printf("Enter the rows and coloum for A matrix:");
  scanf("%d %d", &row, &col);
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("a[%d][%d]", i, j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("the diagonal elsement are: ");
  // sum of daigonal element
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (i == j)
      {

        printf("%d ", a[i][j]);
        sum = sum + a[i][j];
      }
    }
  }
  printf("\n");
  printf("The diaogonal elment sum=%d ", sum);
  return 0;
}
/*
possible input and output
Enter the rows and coloum for A matrix:3 3
a[0][0]3
a[0][1]2
a[0][2]2

a[1][0]3
a[1][1]4
a[1][2]3

a[2][0]4
a[2][1]3
a[2][2]3

3 2 2
3 4 3
4 3 3

the diagonal elsement are: 3 4 3
The diaogonal elment sum=10
*/