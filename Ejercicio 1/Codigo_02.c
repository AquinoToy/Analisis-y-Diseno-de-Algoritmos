#include <stdio.h>
#include <stdlib.h>

int main(int num_args, char *cadena_args[])
{
    int i, j, n, cont = 0;

    n = atoi(cadena_args[1]);
 
for (j = n; j > 1; j /= 2)
{
    if (j < (n / 2))
    {
        for (i = 0; i < n; i += 2)
        {
            printf("Algoritmos");
            cont++;
        }
    }
}
    printf("%d\n", cont);


    return 0;
}