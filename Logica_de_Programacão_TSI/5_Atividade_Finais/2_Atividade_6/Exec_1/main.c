#include <stdio.h>

main()
{
  int n, lin = 0, col = 0, matriz[100][100];
  char c;
  scanf("%d %c", &n, &c);

  if (c == 'T')
  {
    for (lin = 0; lin < n; lin++)
    {
      for (col = 0; col < n; col++)
      {
        if (lin % 2 == 0)
        {
          if (col % 2 == 0)
          {
            matriz[lin][col] = 1;
          }
          else
          {
            matriz[lin][col] = 0;
          }
        }
        else
        {
          if (col % 2 != 0)
          {
            matriz[lin][col] = 1;
          }
          else
          {
            matriz[lin][col] = 0;
          }
        }
        printf("%d ", matriz[lin][col]);
      }
      printf("\n");
    }
  }

  if (c == 'D')
  {
    for (lin = 0; lin < n; lin++)
    {
      for (col = 0; col < n; col++)
      {
        if (lin == col)
        {
          matriz[lin][col] = 1;
        }
        else
        {
          matriz[lin][col] = 0;
        }
        printf("%d ", matriz[lin][col]);
      }
      printf("\n");
    }
  }

  if (c == 'S')
  {
    for (lin = 0; lin < n; lin++)
    {
      for (col = 0; col < n; col++)
      {
        if (col >= lin)
        {
          matriz[lin][col] = 1;
        }
        else
        {
          matriz[lin][col] = 0;
        }
        printf("%d ", matriz[lin][col]);
      }
      printf("\n");
    }
  }

  if (c == 'I')
  {
    for (lin = 0; lin < n; lin++)
    {
      for (col = 0; col < n; col++)
      {
        if (col <= lin)
        {
          matriz[lin][col] = 1;
        }
        else
        {
          matriz[lin][col] = 0;
        }
        printf("%d ", matriz[lin][col]);
      }
      printf("\n");
    }
  }
}