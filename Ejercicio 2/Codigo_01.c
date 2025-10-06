#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variables del código
    int N[] = {-1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593,
               1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int n;
    int i, j, temp;
    int cont, numPruebas;
    numPruebas = 20;

    cont = 0;
    for (int k = 0; k < numPruebas; k++)
    {
        cont = 0;
        n = N[k];
        // Tamaños negativos o cero
        if (n <= 0)
            continue;
        int *A = malloc((n + 2) * sizeof(int)); // +2 por A[j+1]
        for (i = 0; i < n + 2; i++)
            A[i] = 0; // inicializar el arreglo

        // Código dado

        cont++; // Asingación de i
        for (i = 1; i < n; i++)
        {
            cont++; // Comparación de i<n
            cont++; // Incremento de i
            cont++; // Asignación de j
            for (j = n; j > 1; j /= 2)
            {
                cont++; // Comparación de j>1
                cont++; // j /=2

                temp = A[j];
                cont++; // Asignación
                A[j] = A[j + 1];
                cont += 2; // Asinación y arimética
                A[j + 1] = temp;
                cont += 2; // Asinación y arimética
            }
            cont++; // Comparación de j>1 que falla
        }
        cont++; // Comparación de i<n que falla

        // Fin de código dado
        printf("n=%d, cont=%d\n", n, cont);

        free(A);
    }
    return 0;
}