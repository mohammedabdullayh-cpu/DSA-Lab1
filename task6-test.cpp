#include <iostream>
#include <vector>
#include "task6-implementation.cpp"
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4, 2, 5};
    cout << "Unique mode in a array: " << find_mode(arr1) << endl;

    vector<int> arr2 = {1, 1, 2, 2, 3};
    cout << "Multiple modes in array: " << find_mode(arr2) << endl;

    vector<int> arr3;
    cout << "Empty array for histogram: " << find_mode(arr3) << endl;
    return 0;
}