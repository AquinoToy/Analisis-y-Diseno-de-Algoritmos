#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variables del código
    int N[] = {-1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593,
               1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int n;
    int i, j, polinomio, z;
    int cont, numPruebas;
    numPruebas = 20, z = 1;

    cont = 0;
    for (int k = 0; k < numPruebas; k++)
    {
        cont = 0;
        n = N[k];
        int *A = malloc((n + 2) * sizeof(int)); // +2 por A[j+1]
        for (i = 0; i < n + 2; i++)
            A[i] = 0; // inicializar el arreglo

        // Código dado

        polinomio = 0;
        cont++; // Asignación de polinomio
        cont++; // Asignación de i
        for (i = 0; i <= n; i++)
        {
            cont++; // Comparación de i<=n

            polinomio = polinomio * z + A[n - i];
            cont += 4; // 1 asignación y 3 aritmética

            cont++;    // Incremento de i
            cont++; // salto implicito (goto implicito)
        }
        cont++; // Comparación de i<=n que falla

        // Fin de código dado

        printf("n=%d, cont=%d\n", n, cont);

        free(A);
    }
    return 0;
}