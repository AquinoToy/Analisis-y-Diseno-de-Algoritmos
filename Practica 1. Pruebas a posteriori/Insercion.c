/*
Algoritmo de ordenamiento. Burbuja.
Autores: 
		Medrano Muñiz Eyla Natalia 
		Ponce Espino Miguel Ángel
		Salinas Aquino Omar Ivan
Autor original: 
		Edgardo Adri­an Franco Martinez
Fecha de entrega 1 de octubre del 2025
Version: 2.0

Compilación:
Linux: 

Este programa implementa el algoritmo de ordenamiento Burbuja optimizado.
*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

#define TRUE 1
#define FALSE 0

void Insercion(int *A, int n);

int main(int num_arg, char *argv[]) {

    int i, n;
    double utime0, stime0, wtime0, utime1, stime1, wtime1;

    if (num_arg != 2) {
        printf("\nIndique el tamaño de datos a ordenar\n");
        exit(1);
    }
    n = atoi(argv[1]);

    int *A = malloc(n * sizeof(int));
    if (A == NULL) {
        printf("\nError al intentar reservar memoria para %d elementos\n", n);
        exit(1);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Inicia medición
    uswtime(&utime0, &stime0, &wtime0);

    Insercion(A, n);

    // Termina medición
    uswtime(&utime1, &stime1, &wtime1);

    for (i = 0; i < n; i++) {
        printf("%d .- %d\n", (i + 1), A[i]);
    }

    // Mostrar resultados
    printf("\n");
    printf("real (Tiempo total)  %.10f s\n", wtime1 - wtime0);
    printf("user (Tiempo de CPU) %.10f s\n", utime1 - utime0);
    printf("sys (Tiempo E/S)     %.10f s\n", stime1 - stime0);
    printf("CPU/Wall   %.10f %% \n",
           100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));

    free(A);
    return 0;
}

/*

*/
void Insercion(int *A, int n){

	int i, j, temp;

    for(i = 0; i < n-1; i++){
        j = i;
        temp = A[i];
        while(j>0 && temp < A[j-1]){
            A[j] = A[j-1];
            j--;
        } 
        A[j] = temp;
    }
}