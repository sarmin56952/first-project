#include <stdio.h>

int sum(int a, int b) // 3 ta number er jonno sum(int a,int b ,int c)
{

  return a + b; // return a+b+c;
}
int main()
{
  int num1, num2;
  printf("Enter two numbers:");
  scanf("%d %d", &num1, &num2);
  int result = sum(num1, num2);
  printf("The sum is:%d\n", result);
}
