#include <iostream>
#include <math.h>
unsigned long int fact(int f)

{
    if (f < 2)
    {
        return 1;
    }
    else
    {
        return f * fact(f - 1);
    }
}

int komb(int q, int r)
{
    return (fact(q) / (fact(r) * fact(q - r)));
}

int main()
    {
      int i, j, q;
      printf("masukan n: "); scanf("%d", &q);
      for (i = 0; i < q; i++)
      {
        for (j = 0; j <= i; j++)
        {
          printf("%d", komb(i, j));
        }
        printf("\n");
      }

      return 0;
    }
