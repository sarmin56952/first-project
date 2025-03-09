#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  printf("Enter the number of test cases:");
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    char str[1001], rev[1001];
    scanf("%s", str);
    strcpy(rev, str);
    strrev(rev);
    if (strcmp(str, rev) == 0)
    {
      printf("Case number %d : Yes\n", i);
    }
    else
    {
      printf("Case number %d : No\n", i);
    }
  }
  return 0;
}
/*possible inputs:
  3
  madam
  hello
  wow
  possible outputs:
  Case number 1 : Yes
  Case number 2 : No
  Case number 3 : Yes
*/
