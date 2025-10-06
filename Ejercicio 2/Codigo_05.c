#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variables del código
    int N[] = {-1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593,
               1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int n;
    int i, j, k;
    unsigned long long cont;
    int numPruebas;
    numPruebas = 20;

    cont = 0;
    for (int k1 = 0; k1 < numPruebas; k1++)
    {
        cont = 0;
        n = N[k1];

        // Código dado

        cont += 3; // Asignación de i, asinación de j, 1 aritmética
        for (i = n - 1, j = 0; i >= 0; i--, j++)
        {
            cont += 3; // Comparación de i>=0, decremento de i, incremento de j
            cont++;    // s2[j] = s[i];
            cont++;    // Asignación de k
            for (k = 0; k < n; k++)
            {
                cont++; // Comparación de k<n
                cont++; // Incremento de k
                cont++; // s[i] = s2[j];
                cont++; // Salto implícito (goto implicito)
            }
            cont++; // salto implícito (goto implicito)

            cont++; // Comparación de k<n que falla
        }
        cont++; // Comparación de i>=0 que falla

        // Fin de código dado

        printf("n=%d, cont=%llu\n", n, cont);
    }
    return 0;
}