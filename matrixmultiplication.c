#include <stdio.h>
int main()
{
  int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2, i, j, k, sum = 0;
  printf("Enter rows and column for first matrix :\n");
  scanf("%d %d", &r1, &c1);
  printf("Enter rows and column for second matrix :\n");
  scanf("%d %d", &r2, &c2);
  while (c1 != r2)
  {
    printf("Error !! column of first matrix not equal to row of second metrix:\n");
    printf("Enter rows and column for first matrix :\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix :\n");
    scanf("%d %d", &r2, &c2);
  }
  // for first metrix take input
  printf("Enter element for first matrix:\n");
  for (i = 0; i < r1; i++)
  {

    for (int j = 0; j < c1; j++)
    {
      printf("first[%d][%d]", i, j);
      scanf("%d", &first[i][j]);
    }
    printf("\n");
  }
  printf("Enter element for second matrix:\n");
  for (i = 0; i < r2; i++)
  {

    for (int j = 0; j < c2; j++)
    {
      printf("second[%d][%d]", i, j);
      scanf("%d", &second[i][j]);
    }
    printf("\n");
  }
  // multiplying matrix;
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      for (k = 0; k < c1; k++)
      {

        sum = sum + first[i][k] * second[k][j];
      }
      result[i][j] = sum;
      sum = 0;
    }
  }

  // printing first matrix;
  printf("First matrix\n");
  for (i = 0; i < r1; i++)
  {
    printf("\t");
    for (int j = 0; j < c1; j++)
    {
      printf("%d ", first[i][j]);
    }
    printf("\n");
  }
  printf("second matrix\n");
  for (i = 0; i < r2; i++)
  {
    printf("\t");
    for (int j = 0; j < c2; j++)
    {
      printf("%d ", second[i][j]);
    }
    printf("\n");
  }
  // printing result matrix

  printf("result matrix\n");
  for (i = 0; i < r1; i++)
  {
    printf("\t");
    for (int j = 0; j < c2; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
/*possible input:
Enter rows and column for first matrix :
3
2
Enter rows and column for second matrix :
2 3
Enter element for first matrix:
first[0][0]1
first[0][1]2

first[1][0]3
first[1][1]4

first[2][0]5
first[2][1]6

Enter element for second matrix:
second[0][0]1
second[0][1]2
second[0][2]3

second[1][0]4
second[1][1]5
second[1][2]6
possible output:
First matrix
        1 2
        3 4
        5 6
second matrix
        1 2 3
        4 5 6
result matrix
        9 12 15
        19 26 33
        29 40 51
*/