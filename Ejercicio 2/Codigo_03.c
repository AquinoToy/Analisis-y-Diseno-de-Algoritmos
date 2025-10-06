#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variables del código
    int N[] = {-1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593,
               1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int n;
    int i, j;
    unsigned long long cont;
    int numPruebas;
    numPruebas = 20;

    cont = 0;
    for (int k = 0; k < numPruebas; k++)
    {
        cont = 0;
        n = N[k];
        if (n < 0)
        {
            cont++; // Asignación de i
            cont++; // Comparación de i<=n que falla inmediatamente
            // Total: 2 operaciones
        }else{
        // Código dado

        cont++; // Asignación de i
        for (i = 1; i <= n; i++)
        {
            cont++; // Comparación de i<=n
            cont++; // Incremento de i
            cont++; // Salto implícito de i 

            cont++; // Asignación de j
            for (j = 1; j <= n; j++)
            {
                cont++; // Comparación de j<=n
                cont++; // Incremento de j
                cont++; // Salto implícito de j 

                cont++; // C[i, j] = 0;
                cont++; // Asignación de k
                for (int k = 1; k <= n; k++)
                {
                    cont++;    // Comparación de k<=n
                    cont++;    // Incremento de k
                    cont += 3; // C[i, j] = C[i, j] + A[i, k] * B[k, j];
                    cont++;    // Salto implícito de k 
                }
                cont++; // Comparación de k<=n que falla 
            }
            cont++; // Comparación de j<=n que falla 
        }
        cont++; // Comparación de i<=n que falla 
        // Fin de código dado
    }

        printf("n=%d, cont=%llu\n", n, cont);
    }
    return 0;
}