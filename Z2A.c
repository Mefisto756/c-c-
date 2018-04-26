#include <stdio.h>

int main()
{
  int m, n, i;
  scanf("%d %d", &m, &n);

  for (m; m > 0; m--)
  {
    for (i = n; i > 0; i--)
    {
      printf("%d", m * i);
      if (i != 1)
      {
        printf("\t");
      }
    }
    printf("\n");
  }
  return 0;
}
