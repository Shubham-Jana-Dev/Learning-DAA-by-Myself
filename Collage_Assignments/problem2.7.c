// Backtracking:
// 7. Implement 8 Queen Problem
// Ans:
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to print the board
void printBoard(int **board, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Check if placing queen at board[row][col] is safe
bool isSafe(int **board, int row, int col, int N) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
// Check upper diagonal on left side
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (i=row, j=col; i<N && j>=0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Recursive function to solve N-Queen problem
bool solveNQUtil(int **board, int col, int N) {
    if (col >= N)  // All queens placed
        return true;

    // Try placing queen in all rows of this column
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col, N)) {
            board[i][col] = 1;  // Place queen

            if (solveNQUtil(board, col + 1, N)) // Recur for next column
                return true;

            board[i][col] = 0; // Backtrack if dead end
        }
    }

    return false; // No row could place a queen in this column
}

// Wrapper function to solve N-Queen problem
void solveNQ(int N) {
    // Allocate memory for board
    int **board = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        board[i] = (int *)calloc(N, sizeof(int)); // Initialize to 0
    }

    if (!solveNQUtil(board, 0, N)) {
        printf("Solution does not exist for N = %d\n", N);
    } else {
        printf("One possible solution for N = %d:\n\n", N);
        printBoard(board, N);
    }

    // Free memory
    for (int i = 0; i < N; i++)
        free(board[i]);
    free(board);
}

int main() {
    int N;
    printf("Enter the value of N (number of queens and board size): ");
    scanf("%d", &N);

    solveNQ(N); // Call solver
    return 0;
}
