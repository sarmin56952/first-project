#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  printf("Enter the number of test cases:");

  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    printf("Enter the string %d:\n", i);
    char str1[101], str2[101];
    getchar();
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    int result = strcmp(str1, str2);
    if (result < 0)
    {
      printf("%s\n", str1);
    }
    else if (result > 0)
    {
      printf("%s\n", str2);
    }
    else
    {
      printf("Equal\n");
    }
  }
  return 0;
}
