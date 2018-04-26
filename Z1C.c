#include <stdio.h>

int main()
{
  int liczba,
  max = 0;

  do
  {
    scanf("%d", &liczba);
    if (liczba > max)
    {
      max = liczba;
    }
  } while(liczba >= 0);

  printf("Maks to %d\n", max);
  return 0;
}
