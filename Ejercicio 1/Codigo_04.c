#include <stdio.h>
#include <stdlib.h>

int main(int num_args, char *cadena_args[])
{
    int i, j, n, cont = 0;

   n = atoi(cadena_args[1]);

    i = n;
    while (i >= 0)
    {
        for (j = n; i < j; i -= 2, j /= 2)
        {
            printf("Algoritmos");
            cont++;
        }
    }

    printf("%d\n", cont);
    return 0;
}