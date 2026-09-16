#include<iostream>
#include<vector> 
using namespace std;

vector<int> indices_function (int arr [], int size, int key){
    vector<int> indices;
    if ((size == 0)){
        cout<<"You entered an empty array."<<endl;
        return indices;
    }
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            indices.push_back(i);
        }
    }
    if(indices.empty()){
        cout<<"Key not found in array.";
    }
    return indices;
}