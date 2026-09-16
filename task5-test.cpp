#include <iostream>
#include <vector>
#include "task5-implementation.cpp"
using namespace std;

vector<int> pascalTriangle(int n);

int main() {
    int testCases[] = {0, 1, 5};
    for (int n : testCases){
        vector<int> tri = pascalTriangle(n);
        cout << "n = " << n << "\n";
        if (tri.empty()) {
            std::cout << "  (empty triangle)\n";
        }
        int idx = 0;
        for (int row = 1; row <= n; ++row) {
            std::cout << "  Row " << row << ": ";
            for (int col = 0; col < row; ++col) 
            {
                std::cout << tri[idx++] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
    std::vector<int> tri = pascalTriangle(5);
    std::vector<int> expectedRow5 = {1, 4, 6, 4, 1};
    int startIdx = 10; 
    bool isCorrect = (tri.size() == 15);
    for (int i = 0; i < 5 && isCorrect; ++i) {
        if (tri[startIdx + i] != expectedRow5[i]) {
            isCorrect = false;
        }
    }
    cout << "Row 5 expected: 1 4 6 4 1\n";
    cout << "Row 5 actual:   ";
    for (int i = 0; i < 5; ++i) {
        cout << tri[startIdx + i] << " ";
    }
    std::cout << "\nRow 5 check: " << (isCorrect ? "PASS" : "FAIL") << "\n";
    return 0;
}