#include <iostream>
#include <cmath>

int main() {
    int matrix[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> matrix[i][j];
        }
    }
    
    int oneRow = -1, oneColumn = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                oneRow = i;
                oneColumn = j;
                break;
            }
        }
    }
    
    int rowMoves = std::abs(oneRow - 2);
    int columnMoves = std::abs(oneColumn - 2);
    int totalMoves = rowMoves + columnMoves;
    
    std::cout << totalMoves << std::endl;
    
    return 0;
}