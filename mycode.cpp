#include <iostream>
#include <vector>

using namespace std;

// Function to print the Sudoku grid
void printGrid(const vector<vector<int>>& grid) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if placing a number in the grid is valid
bool isValidMove(const vector<vector<int>>& grid, int row, int col, int num) {
    // Check the row
    for (int i = 0; i < 9; i++) {
        if (grid[row][i] == num) {
            return false;
        }
    }

    // Check the column
    for (int i = 0; i < 9; i++) {
        if (grid[i][col] == num) {
            return false;
        }
    }

    // Check the 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to let the user input a move
bool makeMove(vector<vector<int>>& grid) {
    int row, col, num;
    cout << "Enter the row (0-8), column (0-8), and number (1-9) separated by spaces: ";
    cin >> row >> col >> num;

    // Check if the move is valid
    if (row >= 0 && row < 9 && col >= 0 && col < 9 && num >= 1 && num <= 9) {
        if (isValidMove(grid, row, col, num)) {
            grid[row][col] = num;
            return true;
        } else {
            cout << "Invalid move. Try again!" << endl;
            return false;
        }
    } else {
        cout << "Invalid input. Row and column should be between 0-8, and number should be between 1-9." << endl;
        return false;
    }
}

// Function to check if the puzzle is solved
bool isSolved(const vector<vector<int>>& grid) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] == 0) {
                return false; // If any cell is 0, it's not solved
            }
        }
    }
    return true; // All cells are filled
}

int main() {
    // A simple, pre-filled Sudoku puzzle (0 represents empty spaces)
    vector<vector<int>> grid = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "Welcome to Sudoku!" << endl;

    // Main game loop
    while (!isSolved(grid)) {
        printGrid(grid);
        if (makeMove(grid)) {
            if (isSolved(grid)) {
                cout << "Congratulations! You've solved the puzzle!" << endl;
                break;
            }
        }
    }

    return 0;
}
