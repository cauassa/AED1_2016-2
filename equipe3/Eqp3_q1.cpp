#include <stdio.h>
#include <stdlib.h>
// essa função ta apenas zerando a matriz, percorre a matriz e zera, como uma matriz é um ponteiro de um ponteiro so fiz alterar o nome
int main(){
	
float **matrx;
int i, j;
matrx = (float*) malloc(sizeof (float)*50);
for(i=0; i<50; i++)
{
    for(j=0; j<50; j++)
    {
        matrx[i][j]=0;
    }
}

return 0;
matrx = NULL
}
