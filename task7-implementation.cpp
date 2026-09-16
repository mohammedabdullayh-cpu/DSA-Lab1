#include <vector>
#include <cstddef>

using namespace std;

//matrix multiplication using loops
vector<vector<int>> standardMultiply(const vector<vector<int>>& matA, const vector<vector<int>>& matB) {
    const size_t dim = matA.size();
    vector<vector<int>> res(dim, vector<int>(dim, 0));
    for (size_t row = 0; row < dim; ++row) {
        for (size_t idx = 0; idx < dim; ++idx) {
            const int a_val = matA[row][idx];
            for (size_t col = 0; col < dim; ++col) {
                res[row][col] += a_val * matB[idx][col];
            }
        }
    }
    return res;
}
vector<vector<int>> strassenMultiply(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    if (A.size() != 2) {
        return standardMultiply(A, B);
    }
    const int m1 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    const int m2 = (A[1][0] + A[1][1]) * B[0][0];
    const int m3 = A[0][0] * (B[0][1] - B[1][1]);
    const int m4 = A[1][1] * (B[1][0] - B[0][0]);
    const int m5 = (A[0][0] + A[0][1]) * B[1][1];
    const int m6 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);
    const int m7 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    return {
        { m1 + m4 - m5 + m7, m3 + m5 },
        { m2 + m4, m1 - m2 + m3 + m6 }
    };
}