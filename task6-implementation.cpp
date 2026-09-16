#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int find_mode(vector<int> arr) {
    if (arr.empty()) 
        return -1;
    unordered_map<int, int> counts;
    int mode = arr[0];
    int maxCount = 0;
    for (int num : arr) {
        counts[num]++;
        if (counts[num] > maxCount) {
            maxCount = counts[num];
            mode = num;
        }
    }
    return mode;
}