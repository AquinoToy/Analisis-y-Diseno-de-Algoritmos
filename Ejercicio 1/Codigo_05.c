#include <stdio.h>
#include <stdlib.h>

int main(int num_args, char *cadena_args[])
{
    int i, j, n, cont = 0;

   n = atoi(cadena_args[1]);

    for (i = 1; i < 4 * n; i *= 2)
    {
        for (j = i; j < 5 * n; j += 3)
        {
            printf("Algoritmos");
            cont++;
        }
    }

    printf("%d\n", cont);
    return 0;
}