#include <stdio.h>

int factorialPila(int num) {

    if(num == 1) {

        return 1;

    } else {

        return num * factorialPila(num - 1);

    }

}

int main() {

    int num;

    printf("Digite un numero: ");
    scanf("%d", &num);

    if(num < 0) {

        printf("No exite factorial para un numero negativo\n");

    } else {

        if(num == 0) {

            printf("El factorial de 0 es 1\n");

        } else {

            printf("El factorial de %d es %d \n", num, factorialPila(num));

        }

    }

    return 0;

}
