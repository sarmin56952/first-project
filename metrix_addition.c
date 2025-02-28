#include <stdio.h>
int main()
{
  int A[10][10], i, j, B[10][10], C[10][10], numberofrows, numberofcols;

  printf("Enter the number of rows and cols:");
  scanf("%d %d", &numberofrows, &numberofcols);

  printf("Enter value of A metrix:\n");

  for (int i = 0; i < numberofrows; i++)
  {
    for (int j = 0; j < numberofcols; j++)
    {
      printf("A[%d][%d] :", i, j);
      scanf("%d", &A[i][j]);
    }
    printf("\n");
  }

  printf("Enter value of B metrix :\n");

  for (int i = 0; i < numberofrows; i++)
  {
    for (int j = 0; j < numberofcols; j++)
    {
      printf("A[%d][%d] :", i, j);
      scanf("%d", &B[i][j]);
    }
    printf("\n");
  }
  printf("A = ");
  for (int i = 0; i < numberofrows; i++)
  {
    printf("\t");
    for (int j = 0; j < numberofcols; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
  printf("\nB = ");
  for (int i = 0; i < numberofrows; i++)
  {
    printf("\t");
    for (int j = 0; j < numberofcols; j++)
    {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }

  // c metrix er khetre
  for (int i = 0; i < numberofrows; i++)
  {
    for (int j = 0; j < numberofcols; j++)
    {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
  // pringting C metrix
  printf("\nC = ");
  for (int i = 0; i < numberofrows; i++)
  {
    printf("\t");
    for (int j = 0; j < numberofcols; j++)
    {

      printf("%d ", C[i][j]);
    }

    printf("\n");
  }

  return 0;
}
/*
Enter the number of rows and cols:2 2
Enter value of A metrix:
A[0][0] :2
A[0][1] :3

A[1][0] :5
A[1][1] :7

Enter value of B metrix :
A[0][0] :4
A[0][1] :3

A[1][0] :2
A[1][1] :2

A =     2 3
        5 7

B =     4 3
        2 2

C =     6 6
        7 9
*/