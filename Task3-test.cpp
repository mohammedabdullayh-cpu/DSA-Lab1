#include <iostream>
#include <vector>
#include "Task3-Implementation.cpp"

using namespace std;

int main() {
    int my_arr1[] = {1, 2, 3, 4, 2, 5}; //multiple occurence
    int target = 2;
    int arr_size1 = sizeof(my_arr1) / sizeof(my_arr1[0]);
    vector<int> result1 = indices_function(my_arr1, arr_size1, target);
    cout<<"Test case 1:";
    cout << "Key found at following indices: ";
    for (int index : result1) {
        cout << index << " ";
    }
    cout << endl;

    int my_arr2[] = {1,3,7,8,9}; //key not present 
    int arr_size2 = sizeof(my_arr2) / sizeof(my_arr2[0]);
    cout<<"Test case 2:";
    vector<int> result2 = indices_function(my_arr2, arr_size2, target);
    for (int index : result2) {
        cout << index << " ";
    }
    cout << endl;

    int my_arr3[] = {}; //key not present 
    int arr_size3 = 0;
    cout<<"Test case 3:";
    vector<int> result3 = indices_function(my_arr3, arr_size3, target);
    for (int index : result3) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}