#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
#define N 5
#define M 7
    int i, j;
    int mt[N][M];
    int *pmt;
    pmt=mt[0];
    int vt[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
           /* mt[i][j] = 1 + rand() % 100;*/
            *(*(mt+i)+j)=1 + rand() % 100;
        printf("%i ", mt[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
           /* mt[i][j] = 1 + rand() % 100;*/
        //*(mt+1)=1 + rand() % 100;
        *(pmt+(i*M+j))=1 + rand()%100;

      //  printf("%i ", mt[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
           /* mt[i][j] = 1 + rand() % 100;*/
        //*(mt+1)=1 + rand() % 100;
        //*(pmt+(i*M+j))=1 + rand()%100;

        printf("%i ", mt[i][j]);
        }
        printf("\n");
    }

    return 0;
}
