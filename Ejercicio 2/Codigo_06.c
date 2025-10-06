#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variables del código
    int N[] = {-1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593,
               1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int n;
    int a, b, l, r, i;
    unsigned long long cont;
    int numPruebas;
    numPruebas = 20;
    cont = 0;
    
    for (int k = 0; k < numPruebas; k++)
    {
        cont = 0;
        n = N[k];
        a = n;
        b = n;
        
        if (n < 2)
        {
            cont++; // Comparación de a < b
            cont++; // Asignación de l
            cont++; // Asignación de r
            cont++; // Asignación de i
            // Total: 4 operaciones (el for no se ejecuta)
        }
        else
        {
            // Código dado
            l = (a < b) ? a : b;
            cont++; // Comparación de a < b
            cont++; // Asignación de l
            
            r = 1;
            cont++; // Asignación de r
            
            cont++; // Asignación de i
            for (i = 2; i <= l; i++)
            {
                cont++; // Comparación de i <= l
                
                if (a % i == 0 && b % i == 0)
                {
                    cont += 2; // a % i
                    cont += 2; // b % i
                    cont++; // Operador &&
                    r = i;
                    cont++; // Asignación de r = i
                }
                else
                {
                    cont += 2; // a % i
                    cont += 2; // b % i
                    cont++; // Operador &&
                }
                
                cont++; // Incremento de i
                cont++; // Salto implícito
            }
            cont++; // Comparación de i <= l que falla
            // Fin de código dado
        }
        
        printf("n=%d, cont=%llu\n", n, cont);
    }
    
    return 0;
}