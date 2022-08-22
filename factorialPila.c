#include <stdio.h>
#include <time.h>

long int factorialPila(int num) {

    // condicion de salida
    if(num == 0) {

        return 1;

    } else {

        // llamada recursiva
        return num * factorialPila(num - 1);

    }

}

int main() {
    
    double timeSpent = 0.0;

    // inicio del contador de tiempo
    clock_t begin = clock();

    int num = 20;

    // condicion del numero de entrada
    if(num < 0) {

        printf("No exite factorial para un numero negativo\n");

    } else {

        if(num == 0) {

            printf("El factorial de 0 es 1\n");

        } else {

            printf("El factorial de %d es %ld \n", num, factorialPila(num));

        }

    }

    // finalizacion del contador de tiempo
    clock_t end = clock();

    // calculo del tiempo total
    timeSpent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("El tiempo total de ejecucion fue de %f segundos\n", timeSpent);

    return 0;

}
