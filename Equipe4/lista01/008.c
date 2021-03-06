#include <stdio.h>
#include <stdlib.h>

int main()
{

  int
    **matrix,
    nrows,
    ncols,
    *xvector,
    aux = 0;

  printf("Insira a quantidade de linhas desejadas: ");
  scanf("%d", &nrows);
  printf("Insira a quantidade de colunas desejadas: ");
  scanf("%d", &ncols);

  xvector = (int *) malloc(sizeof(int) * (nrows*ncols));

  /* Alocando a matriz na memória */

  // Alocando as linhas
  matrix = (int **) malloc(sizeof(int *) * nrows);

  for (int i = 0; i < nrows; i++)
    {
      // Alocando as colunas
      matrix[i] = (int *) malloc(sizeof(int) * ncols);
    }


  // Adicionando elementos a matriz
  for (int z = 0; z < nrows; z++)
    {
      for (int x = 0; x < ncols; x++)
        {
          printf("Insira o elemento[%d][%d]: ", z,x);
          scanf("%d", &matrix[z][x]);
          xvector[aux++] = matrix[z][x];
        }
    }

  // Imprimindo a matriz
  for (int i = 0; i < nrows; i++)
    {
      for (int j = 0; j < ncols; j++)
        {
          printf("%d ", matrix[i][j]);
        }
      printf("\n");
    }


  /*
    Verificação fácil usando vetores
  */

  int repeticoes;
  int tam = (nrows * ncols);

  for (int m = 0; m < tam; m++)
    {
      repeticoes = 0;
      for (int n = 0; n < tam; n++)
        {
          if (xvector[m] == xvector[n])
            {
              if (n < m)
                {
                  break;
                }
              repeticoes++;
            }
        }
      if (repeticoes > 0)
        {
          printf("O valor %d se repete %d vez(es)\n", xvector[m], repeticoes);
        }
    }
  
  return (0);
}
