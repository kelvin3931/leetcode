#include <stdio.h>
#include <stdlib.h>

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {

    int i, j;
    int result = 0;

    int grid1[4][4] = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};

    grid = malloc(sizeof(int*) * gridRowSize);
    for (i = 0; i < gridColSize; i++) {
        grid[i] = malloc(gridColSize * sizeof(int));
    }

    for (i = 0 ; i < gridRowSize; i++) {
        for (j = 0; j < gridColSize; j++) {
            grid[i][j] = grid1[i][j];
        }
    }

    for (i = 0 ; i < gridRowSize; i++) {
        for (j = 0; j < gridColSize; j++) {
            if (grid[i][j] == 1 ) {
                result += 4;
                
                if ((j+1) < gridColSize) {
                    if (grid[i][j+1]) {
                        result -= 1;
                    }
                }

                if ((i+1) < gridRowSize) {
                    if (grid[i+1][j]) {
                        result -= 1;
                    }
                }

                if((i-1) >= 0) {
                    if (grid[i-1][j]) {
                        result -= 1;
                    }
                }

                if ((j-1) >= 0) {
                    if (grid[i][j-1]) {
                        result -= 1;
                    }
                }
            }
        }
    }

    printf("%d\n", result);

    return result;
}

int main() {
    int **ptr;
    int i;

    islandPerimeter(ptr, 4, 4);

    return 0;
}
