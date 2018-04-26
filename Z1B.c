#include <stdio.h>

int main()
{
  int rok;
  scanf("%d", &rok);

  if (rok % 400 == 0)
  {
    printf("\n%d jest przestepny\n", rok);
  }
  else
  {
    if ((rok % 4 == 0) && (rok % 100 != 0))
    {
      printf("\n%d jest przestepny\n", rok);
    }
    else
    {
      printf("\n%d NIE jest przestepny\n", rok);
    }
  }

  return 0;
}
