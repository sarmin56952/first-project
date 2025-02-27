// leaniar search  system e position nirnoi

#include <stdio.h>

int main()
{
  int num[50], n;

  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &num[i]);
  }
  int value, pos = -1, i;
  printf("Enter the value you want to search:");
  scanf("%d", &value);
  for (i = 0; i < n; i++)
  {
    if (value == num[i])
    {
      pos = i + 1;
      break;
    }
  }
  if (pos == -1)
  {
    printf("Item is not found\n");
  }
  else
  {
    printf("The value position is %d", pos);
  }
  return 0;
}
