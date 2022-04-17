#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main()
{
    srand(time(NULL));
    int i;
    int lista[N];

    printf("lista: ");
    for (i=0; i<N; i++)
    {
        lista[i] = rand();
        printf("%d ", lista[i]);
    }

    return 0;
}
