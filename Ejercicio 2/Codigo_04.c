#include <stdio.h>
#include <stdlib.h>

int main()
{

    // Variables del código
    int N[] = {-1, 0, 1, 2, 3, 5, 15, 20, 100, 409, 500, 593,
               1000, 1471, 1500, 2801, 3000, 5000, 10000, 20000};
    int n, n2;
    int i, j, anterior, actual, aux;
    unsigned long long cont;
    int numPruebas;
    numPruebas = 20;

    cont = 0;
    for (int k = 0; k < numPruebas; k++)
    {
        cont = 0;
        n = N[k];
        n2 = n; // Guardar el valor original de n para imprimirlo después
        
        // Código dado

        anterior = 1; cont++; // Asignación de anterior
        actual = 1; cont++; // Asignación de actual
        while(n2>2){
            cont++; // Comparación de n>2
            aux = anterior + actual;
            cont += 2; // Asignación y aritmética
            anterior = actual;
            cont++; // Asignación de anterior
            actual = aux;
            cont++; // Asignación de actual
            n2 = n2-1;
            cont += 2; // Aritmética y asignación de n
            cont++; // Salto implícito (goto implicito)
        }
        cont++; // Comparación de n>2 que falla

        // Fin de código dado
    

        printf("n=%d, cont=%llu\n", n, cont);
    }
    return 0;
}