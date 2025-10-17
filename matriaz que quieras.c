#include <stdio.h>
int main() {
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    int vasquez[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == j) {
                vasquez[i][j] = 1; 
            } else {
                vasquez[i][j] = 0;  
            }
        }
    }
    printf("\nMatrices vasquez (%d x %d):\n", filas, columnas);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", vasquez[i][j]);
        }
        printf("\n");
    }
    return 0;
}