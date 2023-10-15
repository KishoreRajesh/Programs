#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 10


struct Square {
    int isSnake;    
    int destination; 
};

void processBoardConfig(struct Square board[BOARD_SIZE][BOARD_SIZE], int *start, int *end) {
    int row, col;
    for (row = 0; row < BOARD_SIZE; row++) {
        for (col = 0; col < BOARD_SIZE; col++) {
            char token[10];
            scanf("%s", token);
            if (token[0] == 'S') {
                board[row][col].isSnake = 1;
                sscanf(token, "S(%d)", &board[row][col].destination);
            } else if (token[0] == 'L') {
                board[row][col].isSnake = 0;
                sscanf(token, "L(%d)", &board[row][col].destination);
            } else if (token[0] == 'S') {
                board[row][col].isSnake = 0;
            } else if (token[0] == 'E') {
                *end = 1;
            } else if (token[0] == 'S') {
                *start = 1;
            } else {
                board[row][col].isSnake = 0;
            }
        }
    }
}


void canReachEnd(struct Square board[BOARD_SIZE][BOARD_SIZE], int dieInputs[], int *end, int *snakes, int *ladders, int *finalSquare) {
    int currentRow = BOARD_SIZE - 1;
    int currentCol = 0;
    int snakesEncountered = 0;
    int laddersEncountered = 0;

    for (int i = 0; i < dieInputs[0]; i++) {
        if (currentRow == 0 && currentCol == BOARD_SIZE - 1) {
            *end = 1;
            *snakes = snakesEncountered;
            *ladders = laddersEncountered;
            *finalSquare = 0;
            return;
        }

        if (currentRow % 2 == BOARD_SIZE % 2) {
            currentCol++;
        } else {
            currentCol--;
        }

        if (board[currentRow][currentCol].isSnake) {
            currentRow = BOARD_SIZE - 1 - currentRow;
            currentCol = board[currentRow][currentCol].destination - 1;
            snakesEncountered++;
        } else if (!board[currentRow][currentCol].isSnake) {
            currentRow = BOARD_SIZE - 1 - currentRow;
            currentCol = board[currentRow][currentCol].destination - 1;
            laddersEncountered++;
        }
    }

    *end = 0;
    *snakes = snakesEncountered;
    *ladders = laddersEncountered;
    *finalSquare = currentRow * BOARD_SIZE + currentCol + 1;
}

int main() {
    struct Square board[BOARD_SIZE][BOARD_SIZE];
    int start = 0, end = 0;
    processBoardConfig(board, &start, &end);

    if (start == 0 || end == 0) {
        printf("Not possible 0 0 0\n");
        return 0;
    }

    int dieInputs[6];
    for (int i = 0; i < 6; i++) {
        scanf("%d", &dieInputs[i]);
    }

    int isEnd, snakescrossed, ladderspassed, finalSquare;
    canReachEnd(board, dieInputs, &isEnd, &snakescrossed, &ladderspassed, &finalSquare);

    if (isEnd) {
        printf("Possible %d %d\n", snakescrossed, ladderspassed);
    } else {
        printf("Not possible %d %d %d\n", snakescrossed, ladderspassed, finalSquare);
    }

    return 0;
}
