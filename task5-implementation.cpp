#include <vector>
#include <iostream>
using namespace std;

vector<int> pascalTriangle(int n){ //this function returns vector in result. 
    vector<int> triangle;
    if (n <= 0)
        return triangle;   //negative number - edge case 
    vector<int> row; 
    for (int r = 0; r < n; r++){
        row.push_back(1); 
        for (int i = r - 1; i > 0; i--)
            row[i] = row[i] + row[i - 1];
        for (int i = 0; i <= r; i++) 
            triangle.push_back(row[i]);
    }
    return triangle;
}