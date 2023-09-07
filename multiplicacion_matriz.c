#include <stdio.h>

int main() {
    int filas, columnas, escalar;

    // Solicita al usuario el número de filas de la matriz
    printf("Introduce el número de filas de la matriz: ");
    scanf("%d", &filas);

    // Solicita al usuario el número de columnas de la matriz
    printf("Introduce el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];

    // Solicita al usuario los elementos de la matriz
    printf("Introduce los elementos de la matriz (%d filas x %d columnas):\n", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicita al usuario el valor del escalar
    printf("Introduce el valor del escalar: ");
    scanf("%d", &escalar);

    printf("\nMatriz original:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz multiplicada por %d:\n", escalar);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] *= escalar;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
