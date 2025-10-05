#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int num_args, char *cadena_args[])
{
    int i, j, k, n;
    long long int cont = 0;
    
   n = atoi(cadena_args[1]);

    for (i = 0; i < n * 5; i += 2)
    {
        for (j = 0; j < 2 * n; j++)
        {
            for (k = j; k < n; k++)
            {
                printf("Algoritmos");
                cont++;
            }
        }
    }

    printf("%d\n", cont);
    return 0;
}