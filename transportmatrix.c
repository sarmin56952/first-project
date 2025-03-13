#include <stdio.h>
#include <stdio.h>
int main()
{
  int A[10][10], transpose[10][10], i, j, col, row;
  printf("Enter the row and coloum of A matrix:");
  scanf("%d %d", &row, &col);
  printf("reading rows and colum\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {
      printf("A[%d][%d]=", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }
  printf("printing rows and coloum for A matrix:\n");
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
      transpose[j][i] = A[i][j];
    }
  }
  printf("\n");
  for (i = 0; i < col; i++)
  {
    for (j = 0; j < row; j++)
    {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
