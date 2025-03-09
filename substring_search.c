#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  printf("Enter the number of test casess:");
  scanf("%d", &t);
  getchar();
  for (int i = 1; i <= t; i++)
  {
    char str1[101], str2[21];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (strstr(str1, str2) != NULL)
    {
      printf("FOUND\n");
    }
    else
    {
      printf("NOT FOUND\n");
    }
  }
  return 0;
}
