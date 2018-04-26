#include <stdio.h>
#include <string.h>

int main()
{
  char S[101];
  int dlugosc, i, licznikCyfr = 0;
  scanf("%100s", S);

  dlugosc = strlen(S);

  for (i = 0; i < dlugosc; i++)
  {
    if (S[i] >= '0' && S[i] <= '9')
    {
      licznikCyfr++;
    }
  }

  printf("%d\n", licznikCyfr);

  return 0;
}
