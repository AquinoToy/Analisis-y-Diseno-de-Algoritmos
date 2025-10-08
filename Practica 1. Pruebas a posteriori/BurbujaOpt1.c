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

void AlgoritmoBurbujaOpt1(int *arregloA, int n);

int main(int num_arg, char *argv[]) {

    int i, n;
    double utime0, stime0, wtime0, utime1, stime1, wtime1;

    if (num_arg != 2) {
        printf("\nIndique el tamaño de datos a ordenar\n");
        exit(1);
    }
    n = atoi(argv[1]);

    int *arregloA = malloc(n * sizeof(int));
    if (arregloA == NULL) {
        printf("\nError al intentar reservar memoria para %d elementos\n", n);
        exit(1);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arregloA[i]);
    }

    // Inicia medición
    uswtime(&utime0, &stime0, &wtime0);

    AlgoritmoBurbujaOpt1(arregloA, n);

    // Termina medición
    uswtime(&utime1, &stime1, &wtime1);

    for (i = 0; i < n; i++) {
        printf("%d .- %d\n", (i + 1), arregloA[i]);
    }

    // Mostrar resultados
    printf("\n");
    printf("real (Tiempo total)  %.10f s\n", wtime1 - wtime0);
    printf("user (Tiempo de CPU) %.10f s\n", utime1 - utime0);
    printf("sys (Tiempo E/S)     %.10f s\n", stime1 - stime0);
    printf("CPU/Wall   %.10f %% \n",
           100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));

    free(arregloA);
    return 0;
}

/*

*/
void AlgoritmoBurbujaOpt1(int *arregloA, int n){

	int i, j, aux;
	
	for(i=0;i<n-2; i++){
		for(j=0; j<(n-2)-1;j++){
			if(arregloA[j]>arregloA[j+1]){
				aux = arregloA[j];
				arregloA[j] = arregloA[j+1];
				arregloA[j+1] = aux;
			}
		}
	}
}