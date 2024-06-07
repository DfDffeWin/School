#include <iostream>
#include <vector>

// Function to perform matrix addition
std::vector<std::vector<int>> matrixAddition(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

// Function to perform matrix multiplication
std::vector<std::vector<int>> matrixMultiplication(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    std::vector<std::vector<int>> result(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

// Function to perform matrix transpose
std::vector<std::vector<int>> matrixTranspose(const std::vector<std::vector<int>>& A) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(cols, std::vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = A[i][j];
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    std::vector<std::vector<int>> B = {{7, 8, 9}, {10, 11, 12}};

    // Matrix addition
    std::vector<std::vector<int>> additionResult = matrixAddition(A, B);
    std::cout << "Matrix Addition Result:" << std::endl;
    for (const auto& row : additionResult) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    // Matrix multiplication
    std::vector<std::vector<int>> multiplicationResult = matrixMultiplication(A, B);
    std::cout << "Matrix Multiplication Result:" << std::endl;
    for (const auto& row : multiplicationResult) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    // Matrix transpose
    std::vector<std::vector<int>> transposeResult = matrixTranspose(A);
    std::cout << "Matrix Transpose Result:" << std::endl;
    for (const auto& row : transposeResult) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
