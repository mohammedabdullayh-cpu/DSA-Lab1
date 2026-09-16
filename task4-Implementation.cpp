#include <iostream>
#include <string>
using namespace std;

int find_pattern(string text, string pattern) {
    int len_text = text.length();
    int len_pattern = pattern.length();

    if (len_pattern == 0) { //empty pattern ''
        cout<<"Empty pattern: ";
        return 0;
    }
    for (int i = 0; i <= len_text - len_pattern; i++) { //I am using text length - pattern length because if remaining text is smaller than the length of pattern, there can be no match.
        if(text.substr(i, pattern.length()) == pattern){
            return i;
        }
}
return -1;
}