#include <stdio.h>
#include<math.h>
int main()
{
  int uppersum = 0, lowersum = 0, A[10][10], i, j, row, col;
  printf("Enter rows and coloum for A matrix: ");
  scanf("%d%d", &row, &col);
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("A[%d][%d]", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }
  // printing A matrix
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      if (i < j)
      {
        uppersum = uppersum + A[i][j];
      }
      if (i > j)
      {
        lowersum = lowersum + A[i][j];
      }
    }
  }
  printf("\n sum of upper triangle element =%d\n", uppersum);
  printf("\n sum of lower triangle element =%d\n", lowersum);
  return 0;
}
/*possible input and output:
Enter rows and coloum for A matrix: 3 3
A[0][0]3
A[0][1]2
A[0][2]2

A[1][0]5
A[1][1]4
A[1][2]3

A[2][0]5
A[2][1]4
A[2][2]3

3 2 2
5 4 3
5 4 3

 sum of upper triangle element =7

 sum of upper triangle element =14
*/
