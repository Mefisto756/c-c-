#include <stdio.h>

int main()
{
  int input;

  scanf("%d", &input);

  if (input % 2 == 0)
  {
    printf("Liczba %d jest podzielna przez 2\n", input);
  }
  if (input % 3 == 0)
  {
    printf("Liczba %d jest podzielna przez 3\n", input);
  }
  if (input % 5 == 0)
  {
    printf("Liczba %d jest podzielna przez 5\n", input);
  }
  if (input % 7 == 0)
  {
    printf("Liczba %d jest podzielna przez 7\n", input);
  }

  return 0;
}
