#include <stdio.h>
#include <math.h>
int main()
{
  int first[10][10], second[10][10], result[10][10], r1, r2, c1, c2, i, j, k, sum = 0;
  printf("Enter rows and column for first matrix:");
  scanf("%d %d", &r1, &c1);
  printf("Enter rows and column for second matrix:");
  scanf("%d %d", &r2, &c2);
  while (c1 != r2)
  {
    printf("Enter rows and column for first matrix:");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix:");
    scanf("%d %d", &r2, &c2);
  }
  printf("Enter the value of first matrix:\n");
  printf("\n");
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {
      printf("first[%d][%d]", i, j);
      scanf("%d", &first[i][j]);
    }
    printf("\n");
  }
  printf("Enter the value of second matrix:\n");
  printf("\n");
  for (i = 0; i < r2; i++)
  {
    for (j = 0; j < c2; j++)
    {
      printf("second[%d][%d]", i, j);
      scanf("%d", &second[i][j]);
    }
    printf("\n");
  }
  // printing matrix
  printf("\n\nprintf first matrix:\n");
  printf("\n");
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c1; j++)
    {

      printf("%d ", first[i][j]);
    }
    printf("\n");
  }
  printf("\n\nprintf second matrix:\n");
  printf("\n");
  for (i = 0; i < r2; i++)
  {
    for (j = 0; j < c2; j++)
    {

      printf("%d ", second[i][j]);
    }
    printf("\n");
  }
  // multiplying matrix
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
  printf("\n\nprinting result  matrix:\n");
  printf("\n");
  for (i = 0; i < r1; i++)
  {
    for (j = 0; j < c2; j++)
    {

      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}
/*possible inputs and outputs

Enter rows and column for first matrix:3 4
Enter rows and column for second matrix:4 3
Enter the value of first matrix:

first[0][0]3
first[0][1]2
first[0][2]3
first[0][3]2

first[1][0]3
first[1][1]4
first[1][2]5
first[1][3]6

first[2][0]4
first[2][1]3
first[2][2]2
first[2][3]3

Enter the value of second matrix:

second[0][0]4
second[0][1]5
second[0][2]3

second[1][0]2
second[1][1]4
second[1][2]3

second[2][0]4
second[2][1]5
second[2][2]6

second[3][0]4
second[3][1]5
second[3][2]4



printf first matrix:

3 2 3 2
3 4 5 6
4 3 2 3


printf second matrix:

4 5 3
2 4 3
4 5 6
4 5 4


printing result  matrix:

36 48 41
64 86 75
42 57 45

Process returned 0 (0x0)   execution time : 23.262 s
Press any key to continue.





*/