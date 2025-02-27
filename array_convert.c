// copy values from array1 to array2

#include <stdio.h>
    int
    main()
{
  int array1[30], array2[30], i, n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &array1[i]);
  }
  printf("Array1:");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array1[i]);
  }
  for (int i = 0; i < n; i++)
  {
    array2[i] = array1[i];
  }
  printf("\n");
  printf("Array2:");

  for (int i = 0; i < n; i++)
  {
    printf("%d ", array2[i]);
  }
  return 0;
}
/*
possible input:
3
possible input:
34 56 78 54
possible output:
Array1:34 56 78
Array2:34 56 78
*/