#include <stdio.h>
#include <stdlib.h>

int main(int num_args, char *cadena_args[])
{
    int i, n, cont = 0;

    n = atoi(cadena_args[1]);
 
    for (i = 10; i < n * 5; i *= 2){
        printf("Algoritmos");
        cont++;
    }
    printf("%d\n", cont);


    return 0;
}