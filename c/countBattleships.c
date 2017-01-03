#include <stdio.h>
#include <stdlib.h>

int countBattleships(char** board, int boardRowSize, int boardColSize) {
    
    int count;

    int i, j;
    char grid[3][4] = {{'X','.','.','X'},
                       {'.','.','.','X'},
                       {'.','.','.','X'}};

    board = malloc(boardRowSize * sizeof(char *));

    for (i = 0 ; i < boardColSize; i++) {
        board[i] = malloc(sizeof(char));
    }

    for(i = 0 ; i < boardRowSize; i++) {
        for(j = 0 ; j < boardColSize; j++) {
            board[i][j] = grid[i][j];
        }
    }

    
    count = 0;
    for(i = 0 ; i < boardRowSize; i++) {
        for(j = 0 ; j < boardColSize; j++) {
            if( board[i][j] == 'X') {
                count += 1;

                if (((i-1) >= 0 && board[i-1][j] == 'X') || ((j-1) >= 0 && board[i][j-1] == 'X')) {
                    count -= 1;
                }

            }
        }
    }

    printf("%d\n", count);
    return count;        

}

int main() {

    char **ptr;

    countBattleships(ptr, 3, 4);
    
    return 0;
}
