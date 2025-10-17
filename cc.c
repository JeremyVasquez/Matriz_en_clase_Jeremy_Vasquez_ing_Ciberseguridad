#include <stdio.h>
 
int main() {
    int vasquez[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
 
    printf("la matriz vasquez (5x5):\n");
 
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", vasquez[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}