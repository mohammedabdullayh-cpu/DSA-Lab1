#include <iostream>
#include <vector>
#include <cstdlib>
#include "task7-implementation.cpp"

using namespace std;
vector<vector<int>> standardMultiply(const vector<vector<int>>& matA, const vector<vector<int>>& matB);
vector<vector<int>> strassenMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B);

void printMatrix(const vector<vector<int>>& grid){
    for (const auto& row : grid){
        for (const int val : row){
            cout << val << ' ';
        }
        cout << '\n';
    }
}

int main(){
    // Test Case 1
    const vector<vector<int>> mat1 = {
        {1, 2},
        {3, 4}
    };

    const vector<vector<int>> mat2 = {
        {5, 6},
        {7, 8}
    };
    cout << "2x2 Standard Multiplication Result:\n";
    printMatrix(standardMultiply(mat1, mat2));
    cout << "\n2x2 Strassen Multiplication Result:\n";
    printMatrix(strassenMultiply(mat1, mat2));

    // Test Case 2
    const vector<vector<int>> mat3 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    const vector<vector<int>> mat4 = {
        {1, 0, 0, 1},
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 1, 1}
    };
    cout << "\n4x4 Standard Multiplication Result:\n";
    printMatrix(standardMultiply(mat3, mat4));
    cout << "\n4x4 Strassen Multiplication Result:\n";
    printMatrix(strassenMultiply(mat3, mat4));
    return 0;
}